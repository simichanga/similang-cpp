#include "LLVMIRGenerator.h"
#include <llvm/Support/raw_ostream.h>
#include <llvm/IR/Verifier.h>
#include <fstream>

LLVMIRGenerator::LLVMIRGenerator()
    : context(std::make_unique<llvm::LLVMContext>()),
      module(std::make_unique<llvm::Module>("SimiLangModule", *context)),
      builder(std::make_unique<llvm::IRBuilder<>>(*context)) {}

void LLVMIRGenerator::generateIR(antlr4::tree::ParseTree* tree, LanguageParser& parser) {
    // Create the main function
    llvm::FunctionType* mainFuncType = llvm::FunctionType::get(llvm::Type::getInt32Ty(*context), false);
    llvm::Function* mainFunc = llvm::Function::Create(mainFuncType, llvm::Function::ExternalLinkage, "main", module.get());

    // Create the entry block
    llvm::BasicBlock* entryBlock = llvm::BasicBlock::Create(*context, "entry", mainFunc);
    builder->SetInsertPoint(entryBlock);

    // Visit the parse tree
    visit(tree, parser);

    // Add a return statement
    builder->CreateRet(llvm::ConstantInt::get(*context, llvm::APInt(32, 0)));

    // Verify the module
    llvm::verifyModule(*module, &llvm::errs());

    // Dump the IR to a file
    std::error_code ec;
    llvm::raw_fd_ostream irStream("output.ll", ec);
    if (!ec) {
        module->print(irStream, nullptr);
        std::cout << "IR dumped to output.ll\n";
    } else {
        std::cerr << "Failed to open output.ll for writing: " << ec.message() << "\n";
    }
}

llvm::Value* LLVMIRGenerator::visit(antlr4::tree::ParseTree* tree, LanguageParser& parser) {
    if (auto programCtx = dynamic_cast<LanguageParser::ProgramContext*>(tree)) {
        return visitProgram(programCtx, parser);
    } else if (auto statementCtx = dynamic_cast<LanguageParser::StatementContext*>(tree)) {
        return visitStatement(statementCtx, parser);
    } else if (auto varDeclCtx = dynamic_cast<LanguageParser::VariableDeclarationContext*>(tree)) {
        return visitVariableDeclaration(varDeclCtx, parser);
    } else if (auto assignCtx = dynamic_cast<LanguageParser::AssignmentContext*>(tree)) {
        return visitAssignment(assignCtx, parser);
    } else if (auto exprCtx = dynamic_cast<LanguageParser::ExpressionContext*>(tree)) {
        return visitExpression(exprCtx, parser);
    } else if (auto termCtx = dynamic_cast<LanguageParser::TermContext*>(tree)) {
        return visitTerm(termCtx, parser);
    } else if (auto factorCtx = dynamic_cast<LanguageParser::FactorContext*>(tree)) {
        return visitFactor(factorCtx, parser);
    }
    return nullptr;
}

llvm::Value* LLVMIRGenerator::visitProgram(LanguageParser::ProgramContext* ctx, LanguageParser& parser) {
    for (auto statement : ctx->statement()) {
        visit(statement, parser);
    }
    return nullptr;
}

llvm::Value* LLVMIRGenerator::visitStatement(LanguageParser::StatementContext* ctx, LanguageParser& parser) {
    if (ctx->variableDeclaration()) {
        return visit(ctx->variableDeclaration(), parser);
    } else if (ctx->assignment()) {
        return visit(ctx->assignment(), parser);
    }
    return nullptr;
}

llvm::Value* LLVMIRGenerator::visitVariableDeclaration(LanguageParser::VariableDeclarationContext* ctx, LanguageParser& parser) {
    std::string varName = ctx->ID()->getText();
    llvm::Type* type = nullptr;

    if (ctx->type()->getText() == "int") {
        type = llvm::Type::getInt32Ty(*context);
    } else if (ctx->type()->getText() == "float") {
        type = llvm::Type::getFloatTy(*context);
    }

    if (type) {
        llvm::AllocaInst* alloca = builder->CreateAlloca(type, nullptr, varName);
        return alloca;
    }
    return nullptr;
}

llvm::Value* LLVMIRGenerator::visitAssignment(LanguageParser::AssignmentContext* ctx, LanguageParser& parser) {
    std::string varName = ctx->ID()->getText();
    llvm::Value* value = visit(ctx->expression(), parser);

    // Store the value in the variable
    llvm::AllocaInst* alloca = builder->CreateAlloca(value->getType(), nullptr, varName);
    builder->CreateStore(value, alloca);
    return value;
}

llvm::Value* LLVMIRGenerator::visitExpression(LanguageParser::ExpressionContext* ctx, LanguageParser& parser) {
    llvm::Value* left = visit(ctx->term(0), parser);
    for (size_t i = 1; i < ctx->term().size(); i++) {
        llvm::Value* right = visit(ctx->term(i), parser);
        if (ctx->ADD(i - 1)) {
            left = builder->CreateAdd(left, right, "addtmp");
        } else if (ctx->SUB(i - 1)) {
            left = builder->CreateSub(left, right, "subtmp");
        }
    }
    return left;
}

llvm::Value* LLVMIRGenerator::visitTerm(LanguageParser::TermContext* ctx, LanguageParser& parser) {
    llvm::Value* left = visit(ctx->factor(0), parser);
    for (size_t i = 1; i < ctx->factor().size(); i++) {
        llvm::Value* right = visit(ctx->factor(i), parser);
        if (ctx->MUL(i - 1)) {
            left = builder->CreateMul(left, right, "multmp");
        } else if (ctx->DIV(i - 1)) {
            left = builder->CreateSDiv(left, right, "divtmp");
        }
    }
    return left;
}

llvm::Value* LLVMIRGenerator::visitFactor(LanguageParser::FactorContext* ctx, LanguageParser& parser) {
    if (ctx->ID()) {
        // Look up the variable
        std::string varName = ctx->ID()->getText();
        llvm::AllocaInst* alloca = builder->CreateAlloca(llvm::Type::getInt32Ty(*context), nullptr, varName);
        return builder->CreateLoad(alloca->getAllocatedType(), alloca, varName);
    } else if (ctx->INT()) {
        return llvm::ConstantInt::get(*context, llvm::APInt(32, std::stoi(ctx->INT()->getText())));
    } else if (ctx->FLOAT()) {
        return llvm::ConstantFP::get(*context, llvm::APFloat(std::stof(ctx->FLOAT()->getText())));
    } else if (ctx->expression()) {
        return visit(ctx->expression(), parser);
    }
    return nullptr;
}
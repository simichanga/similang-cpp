#pragma once

#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Value.h>
#include <antlr4-runtime.h>
#include "LanguageParser.h"
#include <unordered_map>
#include <memory>
#include <string>

class LLVMIRGenerator {
public:
    LLVMIRGenerator();
    void generateIR(antlr4::tree::ParseTree* tree, LanguageParser& parser);

private:
    std::unique_ptr<llvm::LLVMContext> context;
    std::unique_ptr<llvm::Module> module;
    std::unique_ptr<llvm::IRBuilder<>> builder;

    // Symbol table to track variable allocations
    std::unordered_map<std::string, llvm::AllocaInst*> symbolTable;

    llvm::Value* visit(antlr4::tree::ParseTree* tree, LanguageParser& parser);
    llvm::Value* visitProgram(LanguageParser::ProgramContext* ctx, LanguageParser& parser);
    llvm::Value* visitStatement(LanguageParser::StatementContext* ctx, LanguageParser& parser);
    llvm::Value* visitVariableDeclaration(LanguageParser::VariableDeclarationContext* ctx, LanguageParser& parser);
    llvm::Value* visitAssignment(LanguageParser::AssignmentContext* ctx, LanguageParser& parser);
    llvm::Value* visitExpression(LanguageParser::ExpressionContext* ctx, LanguageParser& parser);
    llvm::Value* visitTerm(LanguageParser::TermContext* ctx, LanguageParser& parser);
    llvm::Value* visitFactor(LanguageParser::FactorContext* ctx, LanguageParser& parser);

    // Helper function to create an alloca for a variable
    llvm::AllocaInst* createEntryBlockAlloca(llvm::Type* type, const std::string& varName);
};
#include <iostream>
#include <antlr4-runtime.h>
#include "LanguageLexer.h"
#include "LanguageParser.h"
#include "codegen/LLVMIRGenerator.h"

int main() {
    std::string input = "let x: int; x = 42;";

    // Create an ANTLR input stream
    antlr4::ANTLRInputStream inputStream(input);

    // Create the lexer and token stream
    LanguageLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);

    // Create the parser
    LanguageParser parser(&tokens);

    // Parse the input
    auto tree = parser.program();

    // Generate LLVM IR
    LLVMIRGenerator irGenerator;
    irGenerator.generateIR(tree, parser);

    return 0;
}
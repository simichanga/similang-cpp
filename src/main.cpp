#include <iostream>
#include <fstream>
#include <sstream>
#include <antlr4-runtime.h>
#include "LanguageLexer.h"
#include "LanguageParser.h"
#include "codegen/LLVMIRGenerator.h"

std::string readFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << filename << "\n";
        exit(1);
    }
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file>\n";
        return 1;
    }

    // Read the input file
    std::string inputFile = argv[1];
    std::string input = readFile(inputFile);

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

    // Run the generated code
    irGenerator.runCode();

    return 0;
}
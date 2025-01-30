cmake_minimum_required(VERSION 3.14)
project(SimiLangCompiler LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find LLVM
find_package(LLVM REQUIRED CONFIG)

# Add include directories
include_directories(/usr/include/antlr4-runtime)
include_directories(${LLVM_INCLUDE_DIRS})  # Use LLVM_INCLUDE_DIRS from find_package

# Add LLVM definitions
add_definitions(${LLVM_DEFINITIONS})

# Get LLVM libraries using llvm-config
execute_process(
        COMMAND llvm-config --libs core support irreader analysis asmparser bitreader bitwriter codegen executionengine instcombine instrumentation interpreter ipo linker lto mc mcdisassembler mcjit objcarcopts option passes profiledata runtimedyld scalaropts target transformutils vectorize
        OUTPUT_VARIABLE LLVM_LIBS
        OUTPUT_STRIP_TRAILING_WHITESPACE
)

# Add the source files
add_executable(SimiLangCompiler
        src/main.cpp
        src/codegen/LLVMIRGenerator.cpp
        generated/grammar/LanguageLexer.cpp
        generated/grammar/LanguageParser.cpp
)

# Include directories
target_include_directories(SimiLangCompiler PRIVATE
        ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/src
        ${CMAKE_SOURCE_DIR}/generated/grammar
)

# Link ANTLR runtime and LLVM libraries
target_link_libraries(SimiLangCompiler PRIVATE antlr4-runtime ${LLVM_LIBS})
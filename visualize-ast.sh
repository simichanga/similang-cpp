#!/bin/bash

# Create a build directory if it doesn't exist
mkdir -p cmake-build-debug
cd cmake-build-debug

# Configure and build the project using CMake
cmake -DCMAKE_BUILD_TYPE=Debug ..
cmake --build . --target SimiLangCompiler -j 10

# Run the compiled program to generate the DOT file
./SimiLangCompiler

# Visualize the DOT file using Graphviz
dot -Tpng ast.dot -o ast.png

# Open the generated image
xdg-open ast.png
#!/bin/bash
conan install . --output-folder=build --build=missing
cmake .. --preset conan-release
cd build/build/Release
make
make test
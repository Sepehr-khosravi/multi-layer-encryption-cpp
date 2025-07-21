cmake_minimum_required(VERSION 3.10)

project(encryptingData VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include headers from include directory
include_directories(include)

# Add all source files
add_executable(encrypting
    src/main.cpp
    src/encryptor.cpp
    src/utils.cpp
    src/algorithms/caesar.cpp
    src/algorithms/xor.cpp
    src/algorithms/vigenere.cpp
)

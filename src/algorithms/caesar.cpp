#include "algorithms/caesar.hpp"

std::string caesar_encrypt(const std::string& text , int shift){
    std::string result ;
    for (char c : text) result += c + shift;
    return result;
};

std::string caesar_decrypt(const std::string& text , int shift){
    std::string result;
    for(char c : text) result += c - shift;
    return result;
};



#pragma once 
#include <string>

std::string vigenere_encrypt(const std::string& text , const std::string& key);
std::string vigenere_decrypt(const std::string& text , const std::string& key);

#pragma once 
#include <string>
#include <vector>

struct EncryptionStep {
    std::string algorithm;
    int key;
    std::string key_string;
};

std::string encrypt_text(const std::string& text , std::vector<EncryptionStep>& steps);
std::string decrypt_text(const std::string& text , const std::vector<EncryptionStep>& steps);

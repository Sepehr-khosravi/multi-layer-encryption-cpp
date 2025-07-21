#include "algorithms/xor.hpp"

std::string xor_encrypt(const std::string& text , const std::string& key){
    std::string result = text;
    size_t key_len = key.size();

    for(size_t i = 0; i < text.size() ; ++i){
        result[i] = text[i] ^ key[i % key_len];
    }
    return result;
}

std::string xor_decrypt(const std::string& text , const std::string& key){
    return xor_encrypt(text , key);
}
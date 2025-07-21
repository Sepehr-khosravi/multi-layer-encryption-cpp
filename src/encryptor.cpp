#include <iostream>
#include "encryptor.hpp"
#include "algorithms/caesar.hpp"
#include "algorithms/xor.hpp"
#include "algorithms/vigenere.hpp"
#include "algorithms/vigenere.hpp"
#include <cstdlib>
#include <algorithm> // برای reverse

std::string encrypt_text(const std::string &text, std::vector<EncryptionStep> &steps)
{
    std::string result = text;

    // پاک کردن steps در ابتدای کار اگر لازم است
    steps.clear();

    // مرحله 1: Caesar با کلید 3
    EncryptionStep step1 = {"caesar", 3, ""};
    result = caesar_encrypt(result, step1.key);
    steps.push_back(step1);

    // مرحله 2: XOR با کلید 42
    EncryptionStep step2 = {"xor", 42, ""};
    std::string xor_key = std::to_string(step2.key);
    result = xor_encrypt(result, xor_key);
    steps.push_back(step2);

    // مرحله 3: Vigenere با کلید SECRET
    EncryptionStep step3 = {"vigenere", 0, "SECRET"};
    result = vigenere_encrypt(result, step3.key_string);
    steps.push_back(step3);

    return result;
}

std::string decrypt_text(const std::string &text, const std::vector<EncryptionStep> &steps)
{
    std::string result = text;

    for (auto it = steps.rbegin(); it != steps.rend(); ++it)
    {
        std::cout << "Decrypting using " << it->algorithm
                  << " with key: " << it->key
                  << " or string key: " << it->key_string << std::endl;

        if (it->algorithm == "caesar")
        {
            result = caesar_decrypt(result, it->key);
        }
        else if (it->algorithm == "xor")
        {
            std::string xor_key = std::to_string(it->key);
            result = xor_decrypt(result, xor_key);
        }
        else if (it->algorithm == "vigenere")
        {
            result = vigenere_decrypt(result, it->key_string);
        }
    }
    return result;
}

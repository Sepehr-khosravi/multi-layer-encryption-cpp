#include <iostream>
#include <vector>
#include <string>

#include "encryptor.hpp"
#include "utils.hpp"

int main(){
    std::string input ;
    std::cout << "Enter text to encrypt :" ;
    std::getline(std::cin , input);

    //
    std::vector<EncryptionStep> steps;

    steps.push_back({"caesar" , 3 , ""});

    steps.push_back({"xor" , 42 , ""});

    steps.push_back({"vigenere" , 0, "SECRET"});

    std::string encrypted = encrypt_text(input , steps);
    std::cout << "\nEncrypted: " << encrypted << "\n";

    std::string decrypted = decrypt_text(encrypted , steps);
    std::cout << "Decrypted : " << decrypted << "\n";
    
    return 0;
}
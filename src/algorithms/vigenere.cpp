#include "algorithms/vigenere.hpp"
#include <cctype>

// تابع کمک برای تبدیل حروف به عدد (0-25)

static int charToInt(char c){
    if(std::isupper(c)) return c - 'A' ;
    if(std::islower(c)) return c - 'a' ;
    return 0 ;
}

// تابع کمک برای تبدیل عدد به حرف با حفظ بزرگ یا کوچک بودن

static char intToChar(int i , char original){
    if(std::isupper(original)) return 'A' + i;
    if(std::islower(original)) return 'a' + i;
    return original;
}



std::string vigenere_encrypt(const std::string& text ,const std::string& key){
    std::string result;
    size_t key_len = key.length();
    size_t key_index = 0;

    for(char c : text){
        if(std::isalpha(c)){
            int text_val = charToInt(c);
            int key_val = charToInt(key[key_index % key_len]);
            int encrypted_val = (text_val + key_val) % 26;
            result += intToChar(encrypted_val , c); 
            key_index++;
        }else{
            result += c;
        }
    }
    return result;
}

std::string vigenere_decrypt(const std::string& text, const std::string& key){
    std::string result;
    size_t key_len = key.length();
    size_t key_index = 0;

    for(char c : text){
        if(std::isalpha(c)){
            int text_val = charToInt(c);
            int key_val = charToInt(key[key_index % key_len]);
            int decrypted_val = (text_val - key_val + 26) % 26;
            result += intToChar(decrypted_val , c);
            key_index++;
        }else{
            result += c;
        }
    
    }
    return result;
}


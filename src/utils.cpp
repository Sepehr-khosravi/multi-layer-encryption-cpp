#include "utils.hpp"
#include <sstream>
#include <stdexcept>

int string_to_int(const std::string& str){
    try{
        return std::stoi(str);
    }catch(...){
        return 0;
    }
}


std::string int_to_string(int number){
    return std::to_string(number);
}

std::vector<std::string> split(const std::string& str, char delimiter){
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string item;

    while (std::getline(ss , item , delimiter))
    {
        tokens.push_back(item);
    };
    
    return tokens;
}


std::vector<EncryptionStep> parse_encryption_sequence(const std::string& sequence){
    std::vector<EncryptionStep> steps;
    std::vector<std::string> parts = split(sequence , '|');

    for(const std::string& part : parts){
        EncryptionStep step;
        std::vector<std::string> pieces = split(part , ':');
        if(pieces.size() != 2) continue;

        step.algorithm = pieces[0];

        if(step.algorithm == "caesar" || step.algorithm == "xor"){
            step.key = string_to_int(pieces[1]);
            step.key_string = pieces[1];
        }else if(step.algorithm == "vigenere"){
            step.key_string = pieces[1];
        };
        steps.push_back(step);
    }

    return steps;
}



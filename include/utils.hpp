#pragma once

#include <string>
#include <vector>
#include "encryptor.hpp"


//برای برسی خطا در int تبدیل به رشته
int string_to_int(const std::string& std);


//تبدیل int به string 
std::string int_to_string(int number);

//جدا کردن رشته با یک delimiter خاص :

std::vector<std::string> split(const std::string & str , char delimiter);

/// پارس‌کردن رشته‌ی JSON-مانند به EncryptionStepها (مثلاً چیزی مثل caesar:5|xor:secret)

std::vector<EncryptionStep> parse_encryption_sequence(const std::string& sequence);

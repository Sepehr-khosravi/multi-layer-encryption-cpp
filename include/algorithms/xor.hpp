#pragma once
#include <string>

//کلید میتونه هر رشته ای باشهخ و پس ورودی و خرجی رشته است

std::string xor_encrypt(const std::string& text , const std::string& key);
std::string xor_decrypt(const std::string& text , const std::string& key);
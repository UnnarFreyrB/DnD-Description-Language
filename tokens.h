#pragma once

#include <iostream>
#include <string>

struct Token {
    std::string type;
    int value;
    Token();
    ~Token();
};
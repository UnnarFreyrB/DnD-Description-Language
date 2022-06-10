#pragma once

#include "tokens.h"

class Text: public Types {
    private:
        std::string value;
    public:
        Text();
        Text(std::string value);
        std::string get_value();
        ~Text();
};

class Number: public Types {
    private:
        int value;
    public:
        Number();
        Number(int value);
        int get_value();
        ~Number();
};
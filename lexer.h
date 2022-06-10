#pragma once

#include <iostream>
#include <fstream>
#include "types.h"



class Lexer {
    private:
        int pos;
        Token* token;
    public:
        Lexer();
        Lexer(int pos);
        void advance();
};
#include <iostream>
#include <fstream>
#include <string>
#include <tokens.h>


class Lexer {
    private:
        int pos;
        Token token;
    public:
        Lexer();
        Lexer(int pos);
        void advance();
};
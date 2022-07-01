#pragma once

#include <iostream>
#include <string>

class Token {
    private:
        std::string type;
    public:
        Token();
        ~Token();
        virtual std::string getType() = 0;
};

class Types: public Token {
    private:
        std::string ty_type;
    public:
        Types();
        Types(std::string ty_type);
        std::string get_ty_type();
        ~Types();
};

class Operant: public Token {
    private:
        std::string op_type;
    public:
        Operant();
        Operant(std::string type);
        std::string get_op_type();
        ~Operant();
        
};
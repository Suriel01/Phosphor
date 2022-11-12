#ifndef LEXER_H
#define LEXER_H

#pragma once

#include<string>
#include<vector>
#include<iostream>


enum TokenType{

    //basic tokens

    T_IDENTIFIER, 
    T_KEYWORD,
    T_SEPARATOR,
    T_OPERATOR,
    T_LITERAL,
    T_COMMENT,

    //types

    T_CHARACTER,
    T_NUMBER

};

struct Token{
    TokenType type;
    const char * data;

    Token(const TokenType &type,const char * token){
        this->data = token;
        this->type=type;
    }
};


class Lexer{
    std::vector<Token*> tokens;
    std::string code;

    TokenType get_token_type(const char *symbol) noexcept;

public:
    Lexer(const std::istream& stream);
    void tokenize();
};

#endif
#include "Lexer.h"
#include<vector>

TokenType Lexer::get_token_type(const char *symbol){
    //#TODO
    switch(symbol[0]){

            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                return TokenType::T_NUMBER;
            case '+':
            case '-':
            case '*':
            case ':':
            case '%':
            case '^':
            case '=':
            case '[':
            case ']':
                return TokenType::T_OPERATOR;
            case '(':
            case ')':
            case '{':
            case '}':
            case ';':
                return TokenType::T_SEPARATOR;
            case '\"':
                return TokenType::T_LITERAL;
            default:
                return TokenType::T_KEYWORD;

        }
}

Lexer::Lexer(const std::istream& stream){
}

void Lexer::tokenize(){

    char *token = strtok((char*)code.c_str()," ");

    while(token!=NULL){

        TokenType type = get_token_type(token);

        tokens.push_back(new Token(type,token));

        token = strtok(NULL," ");
    }

}
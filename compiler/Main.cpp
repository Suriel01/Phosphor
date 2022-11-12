#include "Lexer.h"

int main(void){

    //std::string code = "int a = 3 + 4";

    Lexer lex(std::cin);
    lex.tokenize();

    return 0;
}
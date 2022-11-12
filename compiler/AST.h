#ifndef AST_H
#define AST_H

#include "Lexer.h"

class AST{

    struct Node{
        Token *token;
        Node *left;
        Node *right;

        Node(const Token *data_token){
            this->token=(Token *)data_token;
            left=right=NULL;
        }

    };

public :

    Node *root;

    AST(){
        root = NULL;
    }

    void add_node(const Token &token){
        if(root==NULL){
            root = new Node(&token);
        }else{
            
        }
    }

};


#endif
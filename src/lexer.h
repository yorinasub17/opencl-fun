#ifndef LEXER_H_
#define LEXER_H_


#include <fstream>
#include <string>


enum TokenValue {
    tok_eof = -1,

    // commands
    tok_def = -2,
    tok_extern = -3,

    // if control flow
    tok_if = -4,
    tok_then = -5,
    tok_else = -6,

    // primary
    tok_identifier = -7,
    tok_number = -8,
};


struct Token {
    int token;
    std::string token_identifier;
    double token_number;
};


Token GetToken(std::ifstream& file);


#endif  // LEXER_H_

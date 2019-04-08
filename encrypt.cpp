#include "encrypt.hpp"

using namespace std;

string encrypt(string input) {
    int encrypt_char(char);
    
    char encrypted[511];
    int i(0);
    
    for (char& c : input) {
        if (c == '\0' || c == '\r' || c == '\n') break;
        char x;
        x = encrypt_char(c);
        
        encrypted[i] = x;
        i++;
    }
    
    return encrypted;
}

int encrypt_char(char c) {
    __asm {
        mov al, c
        sub al, 1
        mov c, al
    }
    return c;
}

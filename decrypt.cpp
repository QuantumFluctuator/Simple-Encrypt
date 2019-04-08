#include "decrypt.hpp"

using namespace std;

string decrypt(string input) {
    int decrypt_char(char);
    
    char decrypted[511];
    int i(0);
    
    for (char& c : input) {
        if (c == '\0' || c == '\r' || c == '\n') break;
        char x;
        x = decrypt_char(c);
        
        if (alphanumeric(x)) {
            decrypted[i] = x;
        }
        i++;
    }
    
    return decrypted;
}

int decrypt_char(char c) {
    __asm {
        mov al, c
        add al, 1
        mov c, al
    }
    return c;
}

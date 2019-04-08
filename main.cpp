#include <iostream>
#include <string>
#include "decrypt.hpp"
#include "encrypt.hpp"

using namespace std;

const string MENUTEXT = "Choose a function to perform\n1 to encrypt\n2 to decrypt\n0 to exit\nYour choice: ";

enum OPTION { exitOption, encryptOption, decryptOption };

int main(int argc, const char * argv[]) {
    int choice;
    
    cout << MENUTEXT;
    cin >> choice;
    
    while (choice != exitOption) {
        switch (choice) {
            case encryptOption: {
                string plaintext, encrypted;
                cout << "Enter a string to encrypt: ";
                cin >> plaintext;
                plaintext += '\0';
                encrypted = encrypt(plaintext);
                cout << "Encrypted text is: " << encrypted << "\n";
                break;
            }
            case decryptOption: {
                string encrypted, decrypted;
                cout << "Enter a string to decrypt: ";
                cin >> encrypted;
                encrypted += '\0';
                decrypted = decrypt(encrypted);
                cout << "Decrypted text is: " << decrypted << "\n";
                break;
            }
        }
        cout << MENUTEXT;
        cin >> choice;
    }
    
    return 0;
}

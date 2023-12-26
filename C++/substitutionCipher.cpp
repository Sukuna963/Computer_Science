/***************************************************************
* Author: Leonardo Marques
* Beginning C++ Programming - From Beginner to Beyond
* Udemy
***************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    //initialize const for cipher
    const string ALPHABET {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string KEY {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    //input message
    string message {};
    cout << "Enter a message to be encrypted: ";
    getline(cin, message);
    cout << endl;

    //encrypted message
    string message_encrypt {};
    for (char c : message) 
    {
        size_t position = ALPHABET.find(c);

        if(position != string::npos) 
        {
            message_encrypt += KEY.at(position);
        }
        else 
        {
            message_encrypt += c;
        }
    }

    cout << "encrypted message: ";
    cout << message_encrypt << endl << endl;

    //decrypted message
    string message_decrypt {};
    for (char c : message_encrypt) 
    {
        size_t position = KEY.find(c);

        if(position != string::npos) 
        {
            message_decrypt += ALPHABET.at(position);
        }
        else 
        {
            message_decrypt += c;
        }
    }

    cout << "decrypted message: ";
    cout << message_decrypt << endl;

    return 0;
}
#include<iostream>
#include<cryptography/caezar.h>
#include<cryptography/monoalphabetic.h>

int main(int argc, char* argv[]){
    std::string text = "Welcome To C++ Cipher Test";
    // Caezar caezer(3);
    Cryptography *p;
    p = new MonoAlphabetic();
    std::string cipherText = p->incrypt(text);
    std::string plainText = p->decrypt(cipherText);
    std::cout<< "cipherText: " << cipherText << std::endl;
    std::cout<< "plaintext: " << plainText << std::endl;

    delete p;

    return 0;
}
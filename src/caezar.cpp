#include<cryptography/caezar.h>

#include<iostream>
#include<string>

Caezar::Caezar():key(0){}

Caezar::Caezar(const int key):key(key){}

Caezar::~Caezar(){}

int Caezar::getKey()const{
    return this->key;
}

void Caezar::setKey(const int key){
    this->key = key;
}

std::string Caezar::incrypt(const std::string plainText){
    std::string cipherText = "";
    for(size_t i =0; i<plainText.length(); ++ i){
        cipherText += cipher(plainText[i], this->key);
    }
    return cipherText;
}

std::string Caezar::decrypt(const std::string cipherText){
    std::string plainText = "";
    for(size_t i =0; i<cipherText.length(); ++ i){
        plainText += cipher(cipherText[i], 26 - (this->key));
    }
    return plainText;
}


char Caezar::cipher(const char c, int k){
    char cip = c;
    if(Cryptography::isChar(c)){
        if(Cryptography::isUpper(c)){
            cip = ((c - 'A' + k) % 26) + 'A';
        }else{
            cip = ((c - 'a' + k) % 26)  + 'a';
        }
    }
    return cip;
}
#ifndef _CAEZAR_CIPHER_
#define _CAEZAR_CIPHER_

#include<string>

#include<cryptography/Cryptography.h>

class Caezar: public Cryptography{
private:
    int key;
    char cipher(const char c, int k);

public:
    Caezar();
    Caezar(const int key);
    ~Caezar();

    int getKey()const;
    void setKey(const int key);
    std::string incrypt(const std::string text);
    std::string decrypt(const std::string text);
};

#endif
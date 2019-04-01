#ifndef _MONO_ALPHABETIC_
#define _MONO_ALPHABETIC_

#include<cryptography/Cryptography.h>

#include<string>

class MonoAlphabetic: public Cryptography{

private:
    char key[26];
    char deKey[26];
    char cipher(const char c);
    char decipher(const char c);

public:
    MonoAlphabetic();
    MonoAlphabetic(char key[]);
    ~MonoAlphabetic();

    void setKey(const char key[]);
    void getKey(char key[])const;

    std::string incrypt(const std::string text);
    std::string decrypt(const std::string text);

};

#endif
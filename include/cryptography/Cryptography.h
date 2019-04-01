#ifndef _CRYPTOGRAPHY_
#define _CRYPTOGRAPHY_

#include <string>

class Cryptography{
protected:
    bool isChar(const char c);
    bool isUpper(const char c);

public:
    virtual std::string incrypt(const std::string plainText) = 0;
    virtual std::string decrypt(const std::string cipherText) = 0;
    virtual ~Cryptography(){}
};

#endif

#include<cryptography/monoalphabetic.h>
#include<string>

MonoAlphabetic::MonoAlphabetic(){
    char d[] = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 
    'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};
    for(int i =0; i<26; ++i){
        this->key[i] = d[i];
        this->deKey[d[i] - 'a'] = 'a' + i; 
    }
        
}

MonoAlphabetic::MonoAlphabetic(char key[]){
    setKey(key);
}

MonoAlphabetic::~MonoAlphabetic(){}

void MonoAlphabetic::setKey(const char key[]){
    for(int i =0; i<26; ++i){
        this->key[i] = key[i];
        if(Cryptography::isUpper(key[i]))
            this->deKey[key[i] - 'A'] = 'A' + i;
        else
            this->deKey[key[i] - 'a'] = 'a' + i;
    }
}

void MonoAlphabetic::getKey(char key[])const {
    for(int i =0; i<26; ++i){
        key[i] = this->key[i];
    }
}

char MonoAlphabetic::cipher(const char c){
    char cc = c;
    if(Cryptography::isChar(c)){
        if(Cryptography::isUpper(c)){
            cc = this->key[c-'A'];
            if(!Cryptography::isUpper(cc))
                cc -= ('a' - 'A');
        }else{
            cc = this->key[c - 'a'];
            if(Cryptography::isUpper(cc))
                cc += ('a' - 'A');
        }
    }
    return cc;
}

char MonoAlphabetic::decipher(const char c){
    char cc = c;
    if(Cryptography::isChar(c)){
        if(Cryptography::isUpper(c)){
            cc = this->deKey[c-'A'];
            if(!Cryptography::isUpper(cc))
                cc -= ('a' - 'A');
        }else{
            cc = this->deKey[c - 'a'];
            if(Cryptography::isUpper(cc))
                cc += ('a' - 'A');
        }
    }
    return cc;
}

std::string MonoAlphabetic::incrypt(const std::string text){
    std::string cipherText = "";
    for(size_t i =0 ; i<text.length(); ++i){
        cipherText += cipher(text[i]);
    }
    return cipherText;
}

std::string MonoAlphabetic::decrypt(const std::string text){
    std::string plainText = "";
    for(size_t i =0 ; i<text.length(); ++i){
        plainText += decipher(text[i]);
    }
    return plainText;
}
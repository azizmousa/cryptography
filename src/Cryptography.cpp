#include<cryptography/Cryptography.h>

bool Cryptography::isChar(const char c){
    return (( c >= 'A'&& c <= 'Z') || (c >= 'a' && c <= 'z'))? true : false;
}

bool Cryptography::isUpper(const char c){
    return (c >= 'A' && c<='Z')? true : false;
}
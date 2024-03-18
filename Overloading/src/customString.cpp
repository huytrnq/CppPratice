#include "customString.h"


customString::customString(/* args */)
{
    std::cout << "Empty constructor called" << std::endl;
    str = new char[1];
    str[0] = '\0';
}

customString::customString(const char *s) : str(nullptr) {
    std::cout << "Args Constructor called" << std::endl;
    int len = strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
}

customString::customString(const customString &source) : str(nullptr){
    std::cout << "Copy constructor called" << std::endl;
    int len = strlen(source.str);
    str = new char[len + 1];
    std::strcpy(str, source.str);
}

customString &customString::operator=(const customString &source){
    std::cout << "Overloading called" << std::endl;
    if (this == &source){
        return *this;
    }
    else{
        delete[] str;
        str = new char[strlen(source.str) + 1];
        int len = strlen(source.str);
        std::strcpy(str, source.str);
        return *this;
    }
}

customString::~customString()
{
    if (str != nullptr){
        delete[] str;
    }
}
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

// Overloading the assignment operator for deep copy
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

customString &customString::operator=(customString &&source){
    std::cout << "Move Overloading called" << std::endl;
    if (this == &source){
        return *this;
    }else{
        delete[] str;
        int len = strlen(source.str);
        str = new char[len + 1];
        std::strcpy(str, source.str);
        source.str = nullptr;
        return *this;
    }
}

bool customString::operator==(const customString &rhs) const {
    return (std::strcmp(str, rhs.str) == 0);
}

void customString::operator+=(const customString  &rhs){
    char *buff;
    buff = new char[strlen(str) + strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    delete[] str;
    str = new char[strlen(buff) + 1];
    std::strcpy(str, buff);
    delete[] buff;

}

customString::~customString()
{
    if (str != nullptr){
        delete[] str;
    }
}

std::ostream &operator<<(std::ostream &os, const customString &rhs){
    os << rhs.str;
    return os;
}
#include "base.h"

Base::Base(): value(0){
    std::cout << "Base Constructor" << std::endl;
}

Base::Base(int value): value(value){
    std::cout << "Base Constructor" << std::endl;
}

Base::~Base(){
    std::cout << "Base Destructor" << std::endl;
}

Base &Base::operator=(const Base &other){
    std::cout << "Base equal overloading" << std::endl;
    if (this == &other){
        return *this;
    }
    value = other.value;
    return *this;
}
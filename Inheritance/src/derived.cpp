#include "derived.h"

Derived::Derived() : Base() {
    std::cout << "Derived No args constructor " << doubled_value << std::endl;
}

Derived::Derived(int value) : Base(value), doubled_value(value){
    std::cout << "int derived constructor" << std::endl;
}

Derived::~Derived(){
    std::cout << "Derived deconstructor" << std::endl;
}
Derived &Derived::operator=(const Derived &other){
    std::cout << "Derived overloading" << std::endl;
    if (this == &other){
        return *this;
    }
    doubled_value = other.doubled_value;
    return *this;
}

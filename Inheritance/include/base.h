#ifndef _BASE_H_
#define _BASE_H_

#include <iostream>

class Base{
    private:
        int value;
    public:
        Base();
        Base(int value);
        ~Base();
        Base &operator=(const Base &other);
};

#endif
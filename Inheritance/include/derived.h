#ifndef _DERIVED_H_
#define _DERIVED_H_

#include <iostream>
#include "base.h"


class Derived: public Base{
    private:
        int doubled_value;
    public:
        Derived();
        Derived(int value);
        ~Derived();
        Derived &operator=(const Derived &other);
};

#endif
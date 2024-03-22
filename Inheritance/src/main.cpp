#include <iostream>
#include "family.h"
#include "base.h"
#include "derived.h"

int main(){
    Father f1("Smith");
    f1.display();
    Mother m1("white");
    Child c1("Smith", "yellow");

    Base b1;
    Base b2(10);
    b1 = b2;
    Derived d1;
    Derived d2 (20);
    d1 = d2;
    return 0;
}
#include <iostream>
#include "shallow.h"

void display_shallow(Shallow s)
{
    std::cout << s.get_data_value() << std::endl;
}

int main()
{
    Shallow obj1{100};
    //objec1 is passed by value to display_shallow and a copy is made
    //then the copy is destroyed when display_shallow ends
    // display_shallow(obj1);

    // This will cause a crash
    // Shallow obj2{obj1};
    Shallow obj2{10};
    obj2.set_data_value(1000);
    
    return 0;
}
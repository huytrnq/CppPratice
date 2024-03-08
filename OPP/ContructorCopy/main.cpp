#include <iostream>
#include "shallow.h"
#include "deep.h"

template <typename T>
void display_shallow(T t)
{
    std::cout << t.get_data_value() << std::endl;
}

int main()
{
    // This will cause a crash
    // Shallow obj1{100};
    //objec1 is passed by value to display_shallow and a copy is made
    //then the copy is destroyed when display_shallow ends
    Deep obj1{100};
    display_shallow(obj1);

    return 0;
}
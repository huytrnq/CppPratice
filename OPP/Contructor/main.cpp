#include <iostream>
#include <vector>

#include "shallow.h"
#include "deep.h"
#include "move.h"

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
    // Deep obj1{100};
    // display_shallow(obj1);

    /// Move constructor
    std::vector <Move> vec;
    // Move{10} is a temporary object, an rvalue
    // Move{10} is moved to the vector
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});

    /// Deep constructor
    std::vector <Deep> vec_deep;
    // Deep{10} is a temporary object, an rvalue
    // Deep{10} is Deepd to the vector
    vec_deep.push_back(Deep{10});
    vec_deep.push_back(Deep{20});
    vec_deep.push_back(Deep{30});

    return 0;
}
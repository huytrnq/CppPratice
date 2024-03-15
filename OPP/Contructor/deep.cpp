#include <iostream>

#include "deep.h"

void Deep::set_data_value(int d)
{
    *data = d;
}

int Deep::get_data_value()
{
    return *data;
}

Deep::Deep(int d)
{
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source):Deep(*source.data){
    std::cout << "Copy contructor - Deep Copy" << std::endl;
};

Deep::~Deep()
{
    delete data;
}
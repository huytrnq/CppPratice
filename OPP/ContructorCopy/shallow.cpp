#include "shallow.h"

void Shallow::set_data_value(int d)
{
    *data = d;
}

int Shallow::get_data_value()
{
    return *data;
}

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source):data{source.data}{};

Shallow::~Shallow()
{
    delete data;
}
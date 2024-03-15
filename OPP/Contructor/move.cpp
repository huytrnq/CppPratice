#include "move.h"

void Move::set_data_value(int d)
{
    *data = d;
}

int Move::get_data_value()
{
    return *data;
}

Move::Move(int d)
{
    data = new int;
    *data = d;
}

Move::~Move()
{
    if (data != nullptr)
    {
        std::cout << "Destructor freed the data " << data << std::endl;
        delete data;
    }
    else
    {
        std::cout << "Destructor freed nullptr" << std::endl;
    }
}

Move::Move(Move &&source) : data {source.data} {
    source.data = nullptr;
    std::cout << "Move constructor - moving resource: " << *data << std::endl;
}

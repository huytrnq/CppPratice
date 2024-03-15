#include <iostream>

class Move
{
private:
    /* data */
    int *data;
public:
    void set_data_value(int d);
    int get_data_value();
    Move(int d);
    ~Move();
    Move(Move &&source); // Move constructor
};

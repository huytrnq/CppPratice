#include <iostream>

class customString
{
private:
    char *str;
public:
    customString(/* args */);
    customString(const char *s);
    customString(const customString &source); // copy constructor
    customString& operator=(const customString &source); // copy assignment operator
    ~customString();
};


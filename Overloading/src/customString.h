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
    customString& operator=(customString &&source); // move assignment operator
    bool operator==(const customString &rhs) const; // comparison operator overloading
    void operator+=(const customString &rhs); // concatenation operator overloading
    friend std::ostream &operator<<(std::ostream &os, const customString &rhs); // print operator overloading
    ~customString();
};



#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account{
    private:
        //attributes
        std::string name;
        double balance;

    public:
        //methods
        void set_name(std::string n);
        bool deposit(double amount);
        bool withdraw(double amount);
};

#endif 
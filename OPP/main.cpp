#include <iostream>
#include <vector>

#include "Account.h"

using namespace std;

class Player{
    private:
        //attributes
        string name;
        int health;
        int xp;

    public:
        //method
        void talk(string text_to_say){
            cout << name << " says " << text_to_say << endl;
            }
        bool is_dead(); 
};


int main(){
    Account frank_account;
    frank_account.set_name("Frank's account");
    if (frank_account.deposit(1000.0)){
        cout << "Deposit OK" << endl;
    }else{
        cout << "Deposit Not allowed" << endl;
    }
    if (frank_account.withdraw(500.0)){
        cout << "Withdraw OK" << endl;
    }else{
        cout << "Not sufficient funds" << endl;
    }

    if (frank_account.withdraw(1500.0)){
        cout << "Withdraw OK" << endl;
    }else{
        cout << "Not sufficient funds" << endl;
    }

    return 0;
}
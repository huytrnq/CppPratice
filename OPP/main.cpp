#include <iostream>
#include <vector>

#include "Account.h"
#include "player.h"

using namespace std;


\
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

    Player frank;
    frank.set_name("Frank");
    Player hero("Hero");
    hero.set_name("Hero");
    Player villain("Villain", 100, 12);
    villain.set_name("Villain");

    Player *enemy = new Player;
    enemy->set_name("Enemy");
    delete enemy;

    return 0;
}
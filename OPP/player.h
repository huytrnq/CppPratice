#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>
#include <string>

class Player{
    private:
        //attributes
        std::string name;
        int health;
        int xp;

    public:
        //method
        void set_name(std::string name_val);
        std::string get_name();
        int get_health();
        void set_health(int h);
        int get_xp();
        void set_xp(int x);

        //overloaded constructors
        Player(): name{"None"}, health{0}, xp{0}{};
        Player(std::string name_val, int health_val, int xp_val)
            : name{name_val}, health{health_val}, xp{xp_val}{
        };
        Player(std::string name) : name{name}, health{0}, xp{0}{
        };
        ~Player(){
            std::cout << "Destructor called for " << name << std::endl;
        }
};

#endif
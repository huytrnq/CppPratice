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
        // Default constructor
        Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
        // Destructor
        ~Player();

};

#endif
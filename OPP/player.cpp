#include "player.h"

void Player::set_name(std::string name_val){
    name = name_val;
}

std::string Player::get_name(){
    return name;
}

int Player::get_health(){
    return health;
}

void Player::set_health(int h){
    health = h;
}

int Player::get_xp(){
    return xp;
}

void Player::set_xp(int x){
    xp = x;
}

//overloaded constructors
Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
};
// Destructor
Player::~Player(){
    std::cout << "Destructor called for " << name << std::endl;
}

Player::Player(const Player &source){
    name = source.name;
    health = source.health;
    xp = source.xp;
    std::cout << "Copy constructor - made copy of: " << source.name << std::endl;
}

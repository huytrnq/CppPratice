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



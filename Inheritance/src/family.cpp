#include "family.h"

Father::Father(std::string name): last_name(name) {}

void Father::display(){
    std::cout << "Last Name: " << last_name << std::endl;
}

Mother::Mother(std::string color): skin_color(color) {}

// Mother::Mother(std::string last_name, std::string color): Father(last_name), skin_color(color) {}

Child::Child(std::string last_name, std::string color) : Father(last_name), Mother(color) {}
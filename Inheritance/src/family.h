#include <iostream>
#include <string>

class Father{
    private:
        std::string last_name;
    public:
        Father(std::string last_name);
        void display();
};

class Mother{
    private:
        std::string skin_color;
    public:
        Mother(std::string color);
        // Mother(std::string last_name, std::string color);
};

class Child: public Father, public Mother{
    public:
        Child(std::string last_name, std::string color);
};
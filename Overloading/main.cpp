#include "customString.h"

int main(){
    customString s2("Hello");
    customString s3(s2);
    customString s4;
    s2 = "Hola";
    s4 = s3;
    if (s2 == s3){
        std::cout << "Equal" << std::endl;
    }

    s2 += " World";
    std::cout << s2 << std::endl;
    return 0;
}
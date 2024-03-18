#include "customString.h"

int main(){
    customString s2("Hello");
    customString s3(s2);
    customString s4;
    s4 = s3;
    return 0;
}
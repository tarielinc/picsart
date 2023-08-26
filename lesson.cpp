#include <iostream>
#define cmp(a,b) (a)>(b)?(a):b



int main(){

    int c = 2;
    int d = 4;

    cmp(++c,d);
    std::cout << "Welcome to wave " << std::ends;
    return 0;

}

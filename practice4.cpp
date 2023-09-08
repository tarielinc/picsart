#include<iostream>


int main () {

    char a = 0;

    std::cout << "input letter\n";
    std::cin >> a;

    if (a < 97){
        a = a + 32;
    }
    else if (a > 96){
        a = a - 32;
    }

    std::cout << a << "\n";
    
}
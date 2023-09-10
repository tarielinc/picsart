#include <iostream>

int main(){

    int n = 0;

    std::cout << "input number\n";
    std::cin >> n; 

    int rn = 0;
    while (n != 0){
        rn = (rn*10) + (n % 10);
        n /= 10;
    }
    std::cout << "rev is " << rn << "\n";


}
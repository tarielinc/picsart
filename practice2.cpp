#include <iostream>

int main(){

    int n = 0;
    std::cout << "input number\n";
    std::cin >> n;
    std::cout << "\n";

    int sum = 0;

    while (n != 0){
        sum += n % 10;
        n /= 10;
    }
    std::cout << "sum is " << sum << "\n";
}
#include <iostream>

int main(){

    int n = 0;
    std::cout << "Input number\n";
    std::cin >> n;
    int fact = 1;

    if (n < 0){
        std::cout << "Enter positive number\n";
        std::cin >> n;
    }
    else if (n == 0 || n == 1){
        fact = 1;
    }
    else {

        for (int i = 2; i <= n; i++)
        {
            fact *= i;
        }
        

    }

    std::cout << "Factorial of " << n << " is " << fact << "\n";

}
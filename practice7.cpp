#include <iostream>

int main(){

    int num1, num2, num3, num4;
    int min = 0;
    
    std::cout << "input numbers";
    std::cin >> num1;
    std::cin >> num2;
    std::cin >> num3;
    std::cin >> num4;
    
    min = num1;
    if(min > num2){
        min = num2;
    }
    if(min > num3){
        min = num2;
    }
    if(min > num4){
        min = num2;
    }
    
    if(num1 + num2 + num3 + num4 == 0)
        std::cout << min;

}
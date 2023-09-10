#include <iostream>

int main(){

    int day = 0;
    std::cout << "Enter day number\n";
    std::cin >> day;

    switch (day)
    {
    case 1:
        std::cout << "Երկուշաբթի\n";
        break;
    case 2:
        std::cout << "Երեքշաբթի\n";
        break;
    case 3:
        std::cout << "Չորեքշաբթի\n";
        break;
    case 4:
        std::cout << "Հինգաշբթի\n";
        break;
    case 5:
        std::cout << "Ուրբաթ\n";
        break;
    case 6:
        std::cout << "Շաբաթ\n";
        break;
    case 7:
        std::cout << "Կիրակի\n";
        break;
    
    default:
        std::cout << "Error\n";
        std::cout << "Input nubmbers from 1 to 7";
        break;
    }

}
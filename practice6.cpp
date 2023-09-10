#include <iostream>

int main(){

    int num1 = 0;
    int num2 = 0;
    char sym; 

    std::cout << "Input operation\n";
    std::cin >> sym;

    std::cout << "Input 2 integers\n";
    std::cin >> num1;
    std::cin >> num2;

    switch (sym)
    {
    case '+':
        std::cout << num1 + num2 << "\n";
        break;
    case '-':
        std::cout << num1 - num2 << "\n";
        break;
    case '*':
        std::cout << num1 * num2 << "\n";
        break;
    case '/':
    {
        if (num2 == 0){
            std::cout << "Error\n";
        }
        else{
            std::cout << num1 / num2 << "\n";
        }
        break;
    }
    default:
        std::cout << "Error";
        break;
    }

    /*
    if(sym == '+'){
        std::cout << num1 + num2 << "\n";
    }
    else if (sym == '-'){ 
        std::cout << num1 - num2 << "\n";
    }
    else if (sym == '*'){
        std::cout << num1 * num2 << "\n";
    } else if (sym == '/'){
        if (num2 == 0){
            std::cout << "Error\n";
        }
        else{
            std::cout << num1 / num2 << "\n";
        }
    }
    else 
        std::cout << "Error";
}

*/

}
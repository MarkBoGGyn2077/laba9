#include <iostream>
#include "std.h"

int main() {
    int num1, num2;

   
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Вывод введенных чисел
    std::cout << "You entered the numbers: " << num1 << " and " << num2 << std::endl;
    int sum = num1 + num2;
    std::cout << "symma " << sum << std::endl;


    return 0;
}

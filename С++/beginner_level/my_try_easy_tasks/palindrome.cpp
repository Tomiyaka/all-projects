#include <iostream>

int main() {
    
    std::cout << "Введите 5-значное число" << '\n';
    int number{};
    int count{};
    int reversed{};
    std::cin >> number;
    int origin = number;
    while (number != 0){
        int last_digit = number % 10;
        reversed = reversed * 10 + last_digit;
        count++;
        number /= 10;
    }
    if (count < 5){
        std::cout << "Ошибка: введите 5-значное число" << '\n';
    }
    else if(origin == reversed){
        std::cout << "Это число палиндром!" << '\n';
    }
    else{
        std::cout << "Это число не палиндром!" << '\n';
    }
    
    return 0;
}
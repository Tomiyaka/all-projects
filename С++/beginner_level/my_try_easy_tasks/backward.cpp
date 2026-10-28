#include <iostream>

int main() {
    
    int number{};
    int reverse{};
    std::cin >> number;
    reverse = ((number % 10) * 1000) + (((number / 10) % 10) * 100) + (((number / 100) % 10) * 10) + (number / 1000);
    std::cout << reverse << '\n';
    return 0;
}
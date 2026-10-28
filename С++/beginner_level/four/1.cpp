#include <iostream>

int main() {
    int num;
    std::cout << "Enter a 6-digit number: ";
    std::cin >> num;

    if (num < 100000 || num > 999999) {
        std::cout << "Error: Not a 6-digit number!" << std::endl;
        return 0;
    }

    int d1 = num / 100000;
    int d2 = (num / 10000) % 10;
    int d3 = (num / 1000) % 10;

    int d4 = (num / 100) % 10;
    int d5 = (num / 10) % 10;
    int d6 = num % 10;

    int sum_first = d1 + d2 + d3;
    int sum_second = d4 + d5 + d6;

    if (sum_first == sum_second) {
        std::cout << "The number is lucky!" << std::endl;
    } else {
        std::cout << "The number is NOT lucky." << std::endl;
    }

    return 0;
}
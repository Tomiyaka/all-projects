#include <iostream>

int main() {
    int current_number;
    int max_value;

    std::cout << "Enter 7 integers:" << std::endl;
    
    std::cout << "Number 1: ";
    std::cin >> max_value;

    for (int i = 2; i <= 7; ++i) {
        std::cout << "Number " << i << ": ";
        std::cin >> current_number;

        if (current_number > max_value) {
            max_value = current_number;
        }
    }

    std::cout << "Max value: " << max_value << std::endl;

    return 0;
}
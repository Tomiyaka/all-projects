#include <iostream>

int main() {
    char num[4];
    std::cout << "Enter a 4-digit number: ";
    
    for (int i = 0; i < 4; ++i) {
        std::cin >> num[i];
    }

    for (int i = 0; i < 4; ++i) {
        if (num[i] < '0' || num[i] > '9') {
            std::cout << "Error: Invalid input!" << std::endl;
            return 0;
        }
    }

    std::cout << "Result: " << num[1] << num[0] << num[3] << num[2] << std::endl;

    return 0;
}
#include <iostream>

int main() {
    char num[4];
    std::cout << "Enter a 4-digit number: ";
    
    for (int i = 0; i < 4; ++i) {
        std::cin >> num[i];
    }

    // Проверка, что все введенные символы — это цифры '0'...'9'
    for (int i = 0; i < 4; ++i) {
        if (num[i] < '0' || num[i] > '9') {
            std::cout << "Error: Invalid input!" << std::endl;
            return 0;
        }
    }

    // Меняем местами 1-ю со 2-й (индексы 1 и 0) и 3-ю с 4-й (индексы 3 и 2)
    std::cout << "Result: " << num[1] << num[0] << num[3] << num[2] << std::endl;

    return 0;
}
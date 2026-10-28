#include <iostream>


int main()
{
    int userChoice, i, j;
    const int size = 11;

    do {
        std::cout << "\nYour choice:\n";
        std::cout << "1 - a\n";
        std::cout << "2 - b\n";
        std::cout << "3 - v\n";
        std::cout << "4 - g\n";
        std::cout << "5 - d\n";
        std::cout << "6 - e\n";
        std::cout << "7 - zh\n";
        std::cout << "8 - z\n";
        std::cout << "9 - i\n";
        std::cout << "10 - k\n";
        std::cout << "0 - quit\n";
        std::cin >> userChoice;

        switch (userChoice) {
        case 1: // а
            for (i = 0; i < size; i++) {
                for (j = 0; j < size; j++) {
                    if (j >= i) std::cout << "*";
                    else std::cout << " ";
                }
                std::cout << "\n";
            }
            break;
        case 2: // б
            for (i = 0; i < size; i++) {
                for (j = 0; j < size; j++) {
                    if (j <= i) std::cout << "*";
                    else std::cout << " ";
                }
                std::cout << "\n";
            }
            break;
        case 3: // в
            for (i = 0; i < size; i++) {
                for (j = 0; j < size; j++) {
                    if (j >= i && j <= size - 1 - i) std::cout << "*";
                    else std::cout << " ";
                }
                std::cout << "\n";
            }
            break;
        case 4: // г
            for (i = 0; i < size; i++) {
                for (j = 0; j < size; j++) {
                    if (j <= i && j >= size - 1 - i) std::cout << "*";
                    else std::cout << " ";
                }
                std::cout << "\n";
            }
            break;
        case 5: // д
            for (i = 0; i < size; i++) {
                for (j = 0; j < size; j++) {
                    if ((j >= i && j <= size - 1 - i) || (j <= i && j >= size - 1 - i)) std::cout << "*";
                    else std::cout << " ";
                }
                std::cout << "\n";
            }
            break;
        case 6: // е
            for (i = 0; i < size; i++) {
                for (j = 0; j < size; j++) {
                    if ((j <= i && j <= size - 1 - i) || (j >= i && j >= size - 1 - i)) std::cout << "*";
                    else std::cout << " ";
                }
                std::cout << "\n";
            }
            break;
        case 7: // ж
            for (i = 0; i < size; i++) {
                for (j = 0; j < size; j++) {
                    if (j <= i && j <= size - 1 - i) std::cout << "*";
                    else std::cout << " ";
                }
                std::cout << "\n";
            }
            break;
        case 8: // з
            for (i = 0; i < size; i++) {
                for (j = 0; j < size; j++) {
                    if (j >= i && j >= size - 1 - i) std::cout << "*";
                    else std::cout << " ";
                }
                std::cout << "\n";
            }
            break;
        case 9: // и
            for (i = 0; i < size; i++) {
                for (j = 0; j < size; j++) {
                    if (j <= size - 1 - i) std::cout << "*";
                    else std::cout << " ";
                }
                std::cout << "\n";
            }
            break;
        case 10: // к
            for (i = 0; i < size; i++) {
                for (j = 0; j < size; j++) {
                    if (j >= size - 1 - i) std::cout << "*";
                    else std::cout << " ";
                }
                std::cout << "\n";
            }
            break;
        case 0:
            std::cout << "See you!\n";
            break;
        default:
            std::cout << "Wrong menu item!\n";
        }
    } while (userChoice != 0);

    return 0;
}
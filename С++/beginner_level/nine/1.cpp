#include <iostream>
#include <windows.h>

int main()
{
    char userSymbol{};
    int speedID{}; int lineType{}; int delay{}; int i{};
    const int length{10};

    std::cout << "Enter a character to make a line:\n";
    std::cin >> userSymbol;

    std::cout << "Select the drawing speed:\n";
    std::cout << "1 - slowly\n";
    std::cout << "2 - normally\n";
    std::cout << "3 - quickly\n";
    std::cin >> speedID;

    switch (speedID) {
    case 1:
        delay = 1000;
        break;
    case 2:
        delay = 500;
        break;
    case 3:
        delay = 0;
        break;
    default:
        std::cout << "Wrong menu item! Quick speed is used.\n";
        delay = 0;
    }

    std::cout << "Select the line type:\n";
    std::cout << "1 - vertical\n";
    std::cout << "2 - horizontal\n";
    std::cin >> lineType;

    switch (lineType) {
    case 1:
        for (i = 0; i < length; i++) {
            Sleep(delay);
            std::cout << userSymbol << "\n";
        }
        break;
    case 2:
        for (i = 0; i < length; i++) {
            Sleep(delay);
            std::cout << userSymbol;
        }
        std::cout << "\n";
        break;
    default:
        std::cout << "Wrong menu item! Horizontal line is used.\n";
        for (i = 0; i < length; i++) {
            Sleep(delay);
            std::cout << userSymbol;
        }
        std::cout << "\n";
    }

    return 0;
}
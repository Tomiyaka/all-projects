#include <iostream>

int main()
{
    int x, y, i;
    double power = 1;

    std::cout << "Enter the number X:\n";
    std::cin >> x;

    std::cout << "Enter the number Y:\n";
    std::cin >> y;

    if (x == 0 && y < 0)
    {
        std::cout << "Error: division by zero";
        return 1;
    }

    i = 0;

    while (i < (y < 0 ? -y : y))
    {
        power = power * x;
        i = i + 1;
    }

    if (y < 0)
    {
        power = 1 / power;
    }

    std::cout << "Result = " << power;

    return 0;
}
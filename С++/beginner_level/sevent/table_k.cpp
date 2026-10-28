#include <iostream>

int main()
{
    int k;

    std::cout << "Enter K (your variant):\n";
    std::cin >> k;

    for (int i = 1; i <= 10; i++)
    {
        std::cout << k << " x " << i
                  << " = " << k * i << "\n";
    }

    return 0;
}
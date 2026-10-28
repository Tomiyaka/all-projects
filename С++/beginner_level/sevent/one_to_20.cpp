#include <iostream>

int main()
{
    int a;
    long long product = 1;

    std::cout << "Enter the number (1-20):\n";
    std::cin >> a;

    if (a < 1 || a > 20)
    {
        std::cout << "Error: number must be from 1 to 20";
        return 1;
    }

    for (int i = a; i <= 20; i++)
    {
        product = product * i;
    }

    std::cout << "Product = " << product;

    return 0;
}
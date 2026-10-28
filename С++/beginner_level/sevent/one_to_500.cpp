#include <iostream>

int main()
{
    int a, sum = 0;

    std::cout << "Enter the number:\n";
    std::cin >> a;

    while (a <= 500)
    {
        sum = sum + a;
        a = a + 1;
    }

    std::cout << "Sum = " << sum;

    return 0;
}
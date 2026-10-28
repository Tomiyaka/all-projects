#include <iostream>

int main()
{
    double result = 0;

    for (int i = 1; i <= 1000; i++)
    {
        result = result + i;
    }

    result = result / 1000;

    std::cout << "Result = " << result;

    return 0;
}
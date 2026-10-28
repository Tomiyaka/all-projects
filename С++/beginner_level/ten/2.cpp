#include <iostream>
#include <cstdlib>
#include <ctime>
 
int main()
{
 
    const int n = 10;
    int mass[n];
    int a, b, level, sum = 0;
    std::srand(std::time(nullptr));
 
    std::cout << "Enter the start of the range to generate numbers:\n";
    std::cin >> a;
    std::cout << "Enter the end of the range:\n";
    std::cin >> b;
    if (a > b) { int t = a; a = b; b = t; }
    std::cout << "Enter the level value:\n";
    std::cin >> level;
 
    for (int i = 0; i < n; i++)
    {
        mass[i] = a + std::rand() % (b - a + 1);
        std::cout << mass[i] << " ";
    }
 
    for (int i = 0; i < n; i++)
        if (mass[i] < level)
            sum += mass[i];
 
    std::cout << "\nSum: " << sum << "\n";
    return 0;
}
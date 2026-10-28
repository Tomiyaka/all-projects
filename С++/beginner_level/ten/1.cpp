#include <iostream>
#include <cstdlib>
#include <ctime>
 
int main()
{
 
    const int n = 10, a = 10, b = 20;   
    int mass[n];
    std::srand(std::time(nullptr));
 
    for (int i = 0; i < n; i++)
    {
        mass[i] = a + std::rand() % (b - a + 1);
        std::cout << mass[i] << " ";
    }
 
    int min = mass[0], max = mass[0];
    for (int i = 1; i < n; i++)
    {
        if (mass[i] > max) max = mass[i];
        if (mass[i] < min) min = mass[i];
    }
 
    std::cout << "\nmin: " << min << ", max: " << max << "\n";
    return 0;
}
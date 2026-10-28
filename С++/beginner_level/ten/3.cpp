#include <iostream>
 
int main()
{
 
    const int n = 12;
    double profit[n];
    int start, end;
 
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter your profit for month " << i + 1 << ":\n";
        std::cin >> profit[i];
    }
 
    do
    {
        std::cout << "Enter the start of the range (1-12):\n";
        std::cin >> start;
        std::cout << "Enter the end of the range (1-12):\n";
        std::cin >> end;
    } while (start < 1 || end > n || start > end);
 
    int minPrMonth = start - 1, maxPrMonth = start - 1;
    for (int i = start; i <= end - 1; i++)
    {
        if (profit[i] > profit[maxPrMonth]) maxPrMonth = i;
        if (profit[i] < profit[minPrMonth]) minPrMonth = i;
    }
 
    std::cout << "You got the min. profit in month " << minPrMonth + 1 << ".\n";
    std::cout << "You got the max. profit in month " << maxPrMonth + 1 << ".\n";
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
 
int main()
{
    std::srand(std::time(nullptr));
 
    const int n = 10;   
    double a[n];
    std::cout << "Array:\n";
    for (int i = 0; i < n; i++)
    {
        a[i] = (std::rand() % 10001 - 5000) / 100.0;
        std::cout << a[i] << " ";
    }
    std::cout << "\n\n";
 
    double sumNeg = 0;
    int iMin = 0, iMax = 0, firstNeg = -1, lastNeg = -1;
 
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            sumNeg += a[i];
            if (firstNeg == -1) firstNeg = i;
            lastNeg = i;
        }
        if (a[i] < a[iMin]) iMin = i;
        if (a[i] > a[iMax]) iMax = i;
    }
 
    std::cout << "1) Sum of negative elements: " << sumNeg << "\n";
 
    int lo = iMin < iMax ? iMin : iMax;
    int hi = iMin < iMax ? iMax : iMin;
    if (hi - lo > 1)
    {
        double prod = 1;
        for (int i = lo + 1; i < hi; i++) prod *= a[i];
        std::cout << "2) Product between min (" << a[iMin] << ") and max (" << a[iMax]
                  << "): " << prod << "\n";
    }
    else
        std::cout << "2) There are no elements between min and max.\n";
 
    if (n >= 2)
    {
        double prod = 1;
        for (int i = 1; i < n; i += 2) prod *= a[i];
        std::cout << "3) Product of elements with even numbers: " << prod << "\n";
    }
    else
        std::cout << "3) There are no elements with even numbers.\n";
 
    if (firstNeg != -1 && lastNeg - firstNeg > 1)
    {
        double s = 0;
        for (int i = firstNeg + 1; i < lastNeg; i++) s += a[i];
        std::cout << "4) Sum between first and last negative elements: " << s << "\n";
    }
    else
        std::cout << "4) There are no elements between the first and last negative ones.\n";
 
    return 0;
}
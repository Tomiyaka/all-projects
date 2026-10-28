#include <iostream>

int main()
{
    int ml1, ml2, ml3;
    int bestM;
    int bestSales;

    double salary1, salary2, salary3;

    std::cout << "Input the level of 1st manager:\n";
    std::cin >> ml1;

    std::cout << "Input the level of 2nd manager:\n";
    std::cin >> ml2;

    std::cout << "Input the level of 3d manager:\n";
    std::cin >> ml3;

    if (ml1 < 500)
    {
        salary1 = 200 + ml1 * 0.03;
    }
    else if (ml1 < 1000)
    {
        salary1 = 200 + ml1 * 0.05;
    }
    else
    {
        salary1 = 200 + ml1 * 0.08;
    }

    if (ml2 < 500)
    {
        salary2 = 200 + ml2 * 0.03;
    }
    else if (ml2 < 1000)
    {
        salary2 = 200 + ml2 * 0.05;
    }
    else
    {
        salary2 = 200 + ml2 * 0.08;
    }

    if (ml3 < 500)
    {
        salary3 = 200 + ml3 * 0.03;
    }
    else if (ml3 < 1000)
    {
        salary3 = 200 + ml3 * 0.05;
    }
    else
    {
        salary3 = 200 + ml3 * 0.08;
    }

    if (ml1 > ml2)
    {
        bestM = 1;
        bestSales = ml1;
    }
    else
    {
        bestM = 2;
        bestSales = ml2;
    }

    if (ml3 > bestSales)
    {
        bestM = 3;
        bestSales = ml3;
    }

    switch (bestM)
    {
        case 1:
            salary1 = salary1 + 200;
            break;

        case 2:
            salary2 = salary2 + 200;
            break;

        case 3:
            salary3 = salary3 + 200;
            break;
    }

    std::cout << "\nThe best - " << bestM
              << " manager. Prize was awarded\n";

    std::cout << "The 1st manager salary: " << salary1 << "\n";
    std::cout << "The 2nd manager salary: " << salary2 << "\n";
    std::cout << "The 3d manager salary: "  << salary3 << "\n";

    return 0;
}

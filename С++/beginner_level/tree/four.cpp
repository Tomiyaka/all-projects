#include <iostream>

int main() {
    int total_seconds = 0;

    std::cout << "Enter time in seconds: ";
    std::cin >> total_seconds;
    int hours = total_seconds / 3600;
    
    int remaining_seconds = total_seconds % 3600;
    
    int minutes = remaining_seconds / 60;
    
    int seconds = remaining_seconds % 60;

    std::cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds\n";

    //2

    double money = 0.0;

    std::cout << "Enter a fractional number: ";
    std::cin >> money;

    int dollars = money;

    int cents = (money - dollars) * 100 + 0.5;

    std::cout << dollars << " dollars and " << cents << " cents\n";

    //3

    int total_days = 0;

    std::cout << "Enter number of days: ";
    std::cin >> total_days;

    int weeks = total_days / 7;
    int days = total_days % 7;

    std::cout << weeks << " weeks and " << days << " days\n";



    return 0;
}

#include <iostream>

int main() {
    double R1{10.0};
    double R2{20.0};
    double R3{30.0};

    double inv_R0 = 1.0 / R1 + 1.0 / R2 + 1.0 / R3;
    
    double R0 = 1.0 / inv_R0;

    std::cout << "R0 = " << R0 << "\n";

    double L = 31.4159;
    double pi = 3.14159;

    double R = L / (2.0 * pi);

    double S = pi * R * R;

    std::cout << "S = " << S << "\n";

    double v = 5.0;  
    double t = 3.0;  
    double a = 2.0;  

    double C = v * t + (a * t * t) / 2.0;

    std::cout << "C = " << C << "\n";

    return 0;
}
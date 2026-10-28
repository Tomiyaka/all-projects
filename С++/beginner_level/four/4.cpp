#include <iostream>

int main() {
    double dist_ab, dist_bc, weight;
    const double TANK_CAPACITY = 300.0;

    std::cout << "Enter distance A-B (km): ";
    std::cin >> dist_ab;
    std::cout << "Enter distance B-C (km): ";
    std::cin >> dist_bc;
    std::cout << "Enter cargo weight (kg): ";
    std::cin >> weight;

    double consumption = 0;

    if (weight <= 0) {
        std::cout << "Error: Weight must be greater than 0." << std::endl;
        return 0;
    } else if (weight <= 500) {
        consumption = 1.0;
    } else if (weight <= 1000) {
        consumption = 4.0;
    } else if (weight <= 1500) {
        consumption = 7.0;
    } else if (weight <= 2000) {
        consumption = 9.0;
    } else {
        std::cout << "Flight impossible: Weight limit exceeded (over 2000 kg)." << std::endl;
        return 0;
    }

    double fuel_needed_ab = dist_ab * consumption;
    double fuel_needed_bc = dist_bc * consumption;

    if (fuel_needed_ab > TANK_CAPACITY || fuel_needed_bc > TANK_CAPACITY) {
        std::cout << "Flight impossible: Distance is too long for the tank capacity." << std::endl;
        return 0;
    }

    double fuel_left_at_b = TANK_CAPACITY - fuel_needed_ab;
    double refuel = 0;

    if (fuel_left_at_b < fuel_needed_bc) {
        refuel = fuel_needed_bc - fuel_left_at_b;
    }

    std::cout << "Minimum refuel at point B: " << refuel << " liters." << std::endl;

    return 0;
}
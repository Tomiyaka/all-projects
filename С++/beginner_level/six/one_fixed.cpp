#include <iostream>

int main()
{
    double pizzaPrice1 = 6.75;
    double pizzaPrice2 = 8.95;
    double pizzaPrice3 = 14.50;
    double pizzaPrice4 = 10.25;

    double drinkPrice1 = 1.79;
    double drinkPrice2 = 2.50;
    double drinkPrice3 = 3.09;

    int pizzaID, drinkID;
    int pizzaAmount, drinkAmount;
    double selectedPizzaPrice = 0.0;
    double selectedDrinkPrice = 0.0;

    std::cout << "--- PIZZA MENU ---\n";
    std::cout << "1 - Cheese Pizza ($" << pizzaPrice1 << ")\n";
    std::cout << "2 - Hawaiian Pizza ($" << pizzaPrice2 << ")\n";
    std::cout << "3 - BBQ Chicken Pizza ($" << pizzaPrice3 << ")\n";
    std::cout << "4 - Seafood Delight Pizza ($" << pizzaPrice4 << ")\n";
    std::cout << "Enter pizza code (1-4): ";
    std::cin >> pizzaID;

    std::cout << "Enter quantity: ";
    std::cin >> pizzaAmount;

    switch (pizzaID)
    {
        case 1: selectedPizzaPrice = pizzaPrice1; break;
        case 2: selectedPizzaPrice = pizzaPrice2; break;
        case 3: selectedPizzaPrice = pizzaPrice3; break;
        case 4: selectedPizzaPrice = pizzaPrice4; break;
        default: selectedPizzaPrice = 0.0; break;
    }

    std::cout << "\n--- DRINKS MENU ---\n";
    std::cout << "1 - Pepsi (Bottle 20 oz) ($" << drinkPrice1 << ")\n";
    std::cout << "2 - Aquafina (Bottle 20 oz) ($" << drinkPrice2 << ")\n";
    std::cout << "3 - Crush Orange (1 Liter) ($" << drinkPrice3 << ")\n";
    std::cout << "Enter drink code (1-3): ";
    std::cin >> drinkID;

    std::cout << "Enter quantity: ";
    std::cin >> drinkAmount;

    switch (drinkID)
    {
        case 1: selectedDrinkPrice = drinkPrice1; break;
        case 2: selectedDrinkPrice = drinkPrice2; break;
        case 3: selectedDrinkPrice = drinkPrice3; break;
        default: selectedDrinkPrice = 0.0; break;
    }

    int freePizza = pizzaAmount / 5;
    int paidPizza = pizzaAmount - freePizza;
    double pizzaSum = paidPizza * selectedPizzaPrice;

    double drinkSum = drinkAmount * selectedDrinkPrice;
    if (drinkAmount > 3 && selectedDrinkPrice > 2.0)
    {
        drinkSum = drinkSum * 0.85;
    }

    double orderSum = pizzaSum + drinkSum;

    if (orderSum > 50.0)
    {
        orderSum = orderSum * 0.80;
    }

    std::cout << "\n------- RECEIPT -------\n";
    if (pizzaAmount > 0)
    {
        switch (pizzaID)
        {
            case 1: std::cout << "Cheese Pizza"; break;
            case 2: std::cout << "Hawaiian Pizza"; break;
            case 3: std::cout << "BBQ Chicken Pizza"; break;
            case 4: std::cout << "Seafood Delight Pizza"; break;
            default: std::cout << "Unknown Pizza"; break;
        }
        std::cout << " x " << pizzaAmount << " (Paid: " << paidPizza << ") = $" << pizzaSum << "\n";
    }

    if (drinkAmount > 0)
    {
        switch (drinkID)
        {
            case 1: std::cout << "Pepsi (Bottle 20 oz)"; break;
            case 2: std::cout << "Aquafina (Bottle 20 oz)"; break;
            case 3: std::cout << "Crush Orange (1 Liter)"; break;
            default: std::cout << "Unknown Drink"; break;
        }
        std::cout << " x " << drinkAmount << " = $" << drinkSum << "\n";
    }
    std::cout << "-----------------------\n";
    std::cout << "Total cost: $" << orderSum << "\n";

    return 0;
}

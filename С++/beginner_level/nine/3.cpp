#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    int menu{};int from{};int to{};int percent{};int mult{};int lives{};int number{};int guess{};int ans{};int guessed{};int score{};int i{};

    do {
        std::cout << "\n====== GUESS MY NUMBER ======\n";
        std::cout << "1 - level 1 (from 1 to 10)\n";
        std::cout << "2 - level 2 (from 10 to 100)\n";
        std::cout << "3 - quit\n";
        std::cin >> menu;

        if (menu == 1) {
            from = 1;
            to = 10;
            percent = 50;
            mult = 5;
        }
        else if (menu == 2) {
            from = 10;
            to = 100;
            percent = 25;
            mult = 10;
        }

        if (menu == 1 || menu == 2) {
            lives = (to - from + 1) * percent / 100;
            std::cout << "Computer is thinking of a number...\n";
            Sleep(1000);
            number = from + rand() % (to - from + 1);
            guessed = 0;

            while (lives > 0 && guessed == 0) {
                std::cout << "\n \\(^_^)/  ALIVE   lives: " << lives << "  ";
                for (i = 0; i < lives; i++)
                    std::cout << "<3 ";
                std::cout << "\n";

                std::cout << "Your guess (" << from << "-" << to << "): ";
                std::cin >> guess;

                if (guess == number) {
                    guessed = 1;
                }
                else {
                    lives--;
                    std::cout << "Wrong!\n";
                    if (lives > 1) {
                        std::cout << "Want a hint? It costs 1 life (1 - yes, 0 - no): ";
                        std::cin >> ans;
                        if (ans == 1) {
                            lives--;
                            if (number > guess)
                                std::cout << "Hint: the number is GREATER than yours\n";
                            else
                                std::cout << "Hint: the number is LESS than yours\n";
                        }
                    }
                }
            }

            if (guessed == 1) {
                score = lives * mult;
                std::cout << "\nCorrect! \\(^_^)/\n";
                std::cout << "Lives left: " << lives << "\n";
                std::cout << "Your score: " << score << "\n";
            }
            else {
                std::cout << "\n (x_x)  DEAD\n";
                std::cout << "The number was " << number << "\n";
                std::cout << "Result: Loss\n";
            }
        }
        else if (menu == 3) {
            std::cout << "See you!\n";
        }
        else {
            std::cout << "Wrong menu item!\n";
        }
    } while (menu != 3);

    return 0;
}
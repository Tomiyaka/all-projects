#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    int menu, level, round, rounds, from, to, percent, mult;
    int startLives, lives, number, guess, ans, guessed, lost, cont, i;
    int userScore, compScore;

    do {
        std::cout << "\n====== GUESS MY NUMBER ======\n";
        std::cout << "1 - play\n";
        std::cout << "2 - quit\n";
        std::cin >> menu;

        if (menu == 1) {
            userScore = 0;
            compScore = 0;
            cont = 1;

            for (level = 1; level <= 2 && cont == 1; level++) {
                if (level == 1) {
                    from = 1;
                    to = 10;
                    percent = 50;
                    mult = 5;
                    rounds = 3;
                }
                else {
                    from = 10;
                    to = 100;
                    percent = 25;
                    mult = 10;
                    rounds = 2;
                }
                startLives = (to - from + 1) * percent / 100;
                lost = 0;
                std::cout << "\n########## LEVEL " << level << " (" << from << "-" << to << ") ##########\n";

                for (round = 1; round <= rounds; round++) {
                    std::cout << "\n--- Round " << round << " of " << rounds << " ---\n";
                    std::cout << "Computer is thinking of a number...\n";
                    Sleep(1000);
                    lives = startLives; // новые жизни перед каждым раундом
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
                        userScore = userScore + lives * mult;
                        std::cout << "\nCorrect! You get " << lives * mult << " points.\n";
                    }
                    else {
                        compScore = compScore + startLives * mult;
                        lost = 1;
                        std::cout << "\n (x_x)  DEAD. The number was " << number << "\n";
                        std::cout << "Computer gets " << startLives * mult << " points.\n";
                    }
                    std::cout << "Round score:  You " << userScore << " : " << compScore << " Computer\n";
                }

                std::cout << "\n=== Level " << level << " finished. Score:  You " << userScore
                          << " : " << compScore << " Computer ===\n";

                cont = 0;
                if (level == 1) {
                    if (lost == 0) {
                        std::cout << "Go to level 2? (1 - yes, 0 - no): ";
                        std::cin >> cont;
                    }
                    else {
                        std::cout << "You lost a round, so level 2 is locked.\n";
                    }
                }
            }

            std::cout << "\n=========== FINAL RESULT ===========\n";
            std::cout << "You: " << userScore << ", computer: " << compScore << "\n";
            if (userScore > compScore)
                std::cout << "YOU WIN!\n";
            else if (userScore < compScore)
                std::cout << "COMPUTER WINS!\n";
            else
                std::cout << "DRAW!\n";
        }
        else if (menu == 2) {
            std::cout << "See you!\n";
        }
        else {
            std::cout << "Wrong menu item!\n";
        }
    } while (menu != 2);

    return 0;
}
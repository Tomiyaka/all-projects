#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    int menu{};int round{};int turn{};int who{};int first{};int userDie{};int compDie{};int k{};
    int dice[2];
    int userSum{};int compSum{};int throwSum{};
    char c{};

    do {
        std::cout << "\n=========== DICE GAME ===========\n";
        std::cout << "1 - play\n";
        std::cout << "2 - quit\n";
        std::cin >> menu;

        if (menu == 1) {
            userSum = 0;
            compSum = 0;

            do {
                userDie = rand() % 6 + 1;
                compDie = rand() % 6 + 1;
                std::cout << "\nFirst throw: you - " << userDie << ", computer - " << compDie << "\n";
            } while (userDie == compDie);

            if (userDie > compDie) {
                first = 0;
                std::cout << "You go first!\n";
            }
            else {
                first = 1;
                std::cout << "Computer goes first!\n";
            }

            for (round = 1; round <= 3; round++) {
                std::cout << "\n************ ROUND " << round << " ************\n";

                for (turn = 0; turn < 2; turn++) {
                    who = (first + turn) % 2;

                    if (who == 0) {
                        std::cout << "\nYour turn. Enter any character to throw: ";
                        std::cin >> c;
                    }
                    else {
                        std::cout << "\nComputer's turn...\n";
                        Sleep(1000);
                    }

                    dice[0] = rand() % 6 + 1;
                    dice[1] = rand() % 6 + 1;

                    for (k = 0; k < 2; k++) {
                        Sleep(500);
                        std::cout << "+-------+\n";
                        switch (dice[k]) {
                        case 1:
                            std::cout << "|       |\n|   o   |\n|       |\n";
                            break;
                        case 2:
                            std::cout << "| o     |\n|       |\n|     o |\n";
                            break;
                        case 3:
                            std::cout << "| o     |\n|   o   |\n|     o |\n";
                            break;
                        case 4:
                            std::cout << "| o   o |\n|       |\n| o   o |\n";
                            break;
                        case 5:
                            std::cout << "| o   o |\n|   o   |\n| o   o |\n";
                            break;
                        case 6:
                            std::cout << "| o   o |\n| o   o |\n| o   o |\n";
                            break;
                        }
                        std::cout << "+-------+\n";
                    }

                    throwSum = dice[0] + dice[1];
                    if (who == 0) {
                        userSum = userSum + throwSum;
                        std::cout << "You threw: " << throwSum << "\n";
                    }
                    else {
                        compSum = compSum + throwSum;
                        std::cout << "Computer threw: " << throwSum << "\n";
                    }
                }
                std::cout << "\nScore after round " << round << ":  You " << userSum
                          << " : " << compSum << " Computer\n";
            }

            std::cout << "\n=========== RESULT ===========\n";
            std::cout << "You: " << userSum << ", computer: " << compSum << "\n";
            if (userSum > compSum)
                std::cout << "YOU WIN!\n";
            else if (userSum < compSum)
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
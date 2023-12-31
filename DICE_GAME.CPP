#include <iostream>
#include <ctime>
#include <cstdlib>

void diceRoll() {
    int roll1, roll2;

    roll1 = (rand() % 6) + 1;
    roll2 = (rand() % 6) + 1;

    std::cout << "You rolled: " << roll1 << " and " << roll2 << std::endl;

    if (roll1 == roll2) {
        std::cout << "Congratulations! You rolled a double." << std::endl;
    } else {
        std::cout << "Better luck next time!" << std::endl;
    }
}

int main() {
    srand(time(0));

    std::cout << "Welcome to the dice game!" << std::endl;
    std::cout << "Rolling the dice..." << std::endl;

    diceRoll();

    return 0;
}

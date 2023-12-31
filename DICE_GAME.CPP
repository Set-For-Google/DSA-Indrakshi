#include <iostream>
#include <ctime>
#include <cstdlib>

void roll_dice(int& die1, int& die2) {
    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;
}

void player_turn(int player) {
    std::cout << "Player " << player << "'s turn:" << std::endl;
    std::cout << "Rolling the dice..." << std::endl;

    int die1, die2;
    roll_dice(die1, die2);

    std::cout << "Die 1: " << die1 << ", Die 2: " << die2 << std::endl;
}

int main() {
    srand(time(0));

    int num_players;
    std::cout << "Enter the number of players: ";
    std::cin >> num_players;

    for (int i = 1; i <= num_players; i++) {
        player_turn(i);
    }

    return 0;
}

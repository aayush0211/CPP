#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

// Define the structure for player information
struct Player {
    std::string name;
    int score;
};

// Function to play the guessing game
int playGame() {
    int target = rand() % 100 + 1; // Generate a random number between 1 and 100
    int attempts = 0;
    int guess;

    std::cout << "Guess the number between 1 and 100." << std::endl;

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < target) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > target) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
            return attempts;
        }
    }
}

int main() {
    srand(static_cast<unsigned>(time(nullptr))) ;

    std::vector<Player> players;
    int numPlayers;

    std::cout << "Enter the number of players: ";
    std::cin >> numPlayers;

    // Register players
    for (int i = 0; i < numPlayers; i++) {
        Player player;
        std::cout << "Enter player " << i + 1 << "'s name: ";
        std::cin >> player.name;
        player.score = playGame();
        players.push_back(player);
    }

    // Sort players by score in descending order
    std::sort(players.begin(), players.end(), [](const Player& a, const Player& b) {
        return b.score > a.score;
    });

    // Display highest scores and rankings
    std::cout << "Highest Scores.. (less attempts player wil win  and Rankings:" << std::endl;
    for (size_t i = 0; i < players.size(); i++) {
        std::cout << "Rank " << i + 1 << ": " << players[i].name << " - Attempts: " << players[i].score << std::endl;
    }

    return 0;
}

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Global variable to store the random number
int secret_number;

// Constant global variable for the maximum number
const int MAX_NUMBER = 100;

// Function declarations
void initialize_game();
void guess_feedback(int user_guess);
void play_game();

// Main function
int main() {
    initialize_game(); // Set up the game
    play_game(); // Let the player start guessing
    return 0;
}

// Function to initialize the game
void initialize_game() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and MAX_NUMBER
    secret_number = (rand() % MAX_NUMBER) + 1;
}

void guess_feedback(int user_guess){
    if (user_guess < secret_number){
        cout << "Too low! Guess a larger number: ";
    }
    else if (user_guess > secret_number){
        cout << "Too high! Guess a smaller number: ";
    }

}

// Function to play the game
void play_game() {
    int guess; // Local variable to store player's guess
    cout << "Enter your guess (between 1 and " << MAX_NUMBER << "): ";
    do {
    cin >> guess;
    guess_feedback(guess);
    } while (guess != secret_number);

    cout << "Congratulations! You guessed the secret number." << endl;
}

#include <iostream>
#include <stdlib.h>
#include "art.h"

void game_start();
void play_again();

int main()
{
    game_start();
    return 0;
}

void game_start()
{
    // Clear the screen
    std::cout << "\033[2J\033[1;1H";

    std::string word_list[]{"computer", "flask", "television", "entertain", "sheep",
                            "speakers", "sound", "chair", "coffee", "awake", "kitty"};
    int word_list_length = sizeof(word_list) / sizeof(word_list[0]);
    int random_number = rand()%word_list_length;
    int tries{6};
    std::string word{word_list[random_number]};
    std::string guessed_letters;
    char user_guess;

    while (tries > 0)
    {
        int fail = 0;
        std::cout << "\n" << hangman[tries] << "\n";
        
        // display word 
        for (int i = 0; i < word.length(); i++)
        {

            if (guessed_letters.find(word[i]) != std::string::npos)
            {
                std::cout << word[i];
            }

            else
            {
                std::cout << "_";
                fail += 1;
            }
        }

        // If the fail counter is zero the word is complete and player wins
        if (fail == 0)
        {
            std::cout << "\nYou won!\n";
            break;
        }

        std::cout << "\n\nTries left [" << tries << "]\nGuessed letters: [" << guessed_letters << "]\n";
        std::cout << "\nGuess a letter: ";
        std::cin >> user_guess;

        // Clear the screen
        std::cout << "\033[2J\033[1;1H";

        // Check if users guess is in the guessed_letters string
        if (guessed_letters.find(user_guess) != std::string::npos)
        {
            std::cout << "You already tried that letter.\n";
        }
        // Users guess isn't in the word
        else if (word.find(user_guess) == std::string::npos)
        {
            tries -= 1;
            guessed_letters += user_guess;
        }
        // Players guess is correct and will append to the guessed letters string
        else 
        {
            guessed_letters += user_guess;
        }
       
        if (tries == 0)
        {
            std:: cout << "Sorry, looks like you lost.\n";
        }
    }
    play_again();
}

void play_again()
{
    std::string user_input;
    std::cin.ignore();
    std::cout << "Would you like to play again? <y/yes to play again>: ";
    std::cin >> user_input;

    if (user_input == "y" || user_input == "yes")
    {
        game_start();
    }

    else 
    {
        std::cout << "Ok, have a nice day.";
    }
}
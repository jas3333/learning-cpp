#include <iostream>
#include <string>
#include <unistd.h>

std::string cipher(std::string, int, std::string);
void type_out(std::string);

int main()
{
    // Super secret message, don't share with anyone! 
    std::string message{"jutz luxmkz zu jxotq EuAx uBgrzotk"};
    std::string choice{"decrypt"};
    int char_shift{6};

    std::string coded_message = cipher(std::string (message), int (char_shift), std::string (choice));

    std::cout << "Decoding secret message: " << message << std::endl;
    type_out(coded_message);
   
    return 0;
}

std::string cipher(std::string message, int shift, std::string choice)
{   
    std::string alpha{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    int new_position{};
    char new_char{};
    int char_location{};
    std::string encrypted_message{};
    // Turn shift number negative to shift chars in opposite direction
    if (choice == "decrypt")
        shift *= -1;
    
    // itterate over message one character at a time
    for (char c: message)
    {
        // If the character is found in alpha string
        if (alpha.find(c) != std::string::npos)
        {
            char_location = alpha.find(c);
            new_position = (char_location + shift) % alpha.length();
            new_char = alpha.at(new_position);
            encrypted_message += new_char;
        }
        else 
            encrypted_message += c;
    }
    return encrypted_message;
}

void type_out(std::string text)
{
    for (char c: text)
    {
        std::cout << c;
        std::cout.flush();
        sleep(1);
    }

}
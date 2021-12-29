// Calculate coins recieved based on amount in cents
#include <iostream>
#include <vector>

int main()
{
    std::vector <int> coin_value{100, 25, 10, 5, 1};
    std::vector <std::string> coins{"Dollars: ", "Quarters: ", "Dimes: ", 
                                    "Nickels: ", "Pennies: "};
    std::vector <int> change{};
    int cents{};

    std::cout << "Enter in change: ";
    std::cin >> cents;

    // Break down total cents into coins   
    for (int i = 0; i < coin_value.size(); i++)
    {
        change.push_back(cents / coin_value.at(i));
        cents -= coin_value.at(i) * (cents / coin_value.at(i));
    }

    // Display amount of coins. If value is 0 don't show
    for (int i = 0; i < coins.size(); i++)
    {
        if (change.at(i) > 0)
        {
            std::cout << coins.at(i) << change.at(i) << std::endl;
        }
    }

    return 0;
}
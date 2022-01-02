#include <iostream>
#include <vector>
#include <string>

class Player{
public:
    // Attributes
    std::string name{};
    int health{};
    int money{};


    // Methods

    void display_stats(){
        std::cout << name << "\n";
        std::cout << "Hp: " << health << "\n";
        std::cout << "Money: " << money << "\n";
    }
};

int main()
{
    Player theo;

    theo.name = "Theo";
    theo.health = 400;
    theo.money = 5000;

    theo.display_stats();


    return 0;
}

#include <iostream>
#include <stdlib.h>

int main()
{
    int random_number;
    
    for (int i = 0; i < 20; i++)
    {
        random_number = rand()%12;
        std::cout << random_number << std::endl;
    }

    return 0;
}

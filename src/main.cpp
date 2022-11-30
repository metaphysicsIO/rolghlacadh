#include <iostream>
#include <string>

#include "player.h"
#include "game.h"

void clear_screen()
{
    std::cout << "\033[2J\033[1;1H";
}

int main()
{
    Game game;

    Player player;

    // Below is all testing.

    game.menu(); 

    clear_screen();

    player.Set_username("username");

    std::cout << "Hello, " << player.Get_username() << std::endl;

    std::cout << "Stats: " << std::endl;

    player.Print_attributes();

    for(int i = 0; i < 5; ++i)
    {
        std::cout << "rolling (20d): " << std::endl;
        std::cout << player.Roll(20) << std::endl;
    }

    return 0;
}

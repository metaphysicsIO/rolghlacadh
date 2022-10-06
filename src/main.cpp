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

    return 0;
}

#include <iostream>
#include <string>

#include "player.h"
#include "game.h"

enum states {MENU, CREATION, QUIT};

states menu_select(char input);

void clear_screen()
{
    std::cout << "\033[2J\033[1;1H";
}


states menu()
{
    char input;

    std::cout << "Welcome to rolghlacadh. (I know the 'o' lacks the fada.)" << std::endl;
    std::cout << std::endl;

    std::cout << "\tc: Create character." << std::endl;
    std::cout << "\tq: Quit." << std::endl;

    std::cin >> input;

    return menu_select(input);
}

states menu_select(char input)
{
    states change_state = MENU;

    switch(input){
        case 'c':
            change_state = CREATION;
            clear_screen();
            break;
        case 'q':
            change_state = QUIT;
            break;
        default:
            std::cout << "Bad input." << std::endl;
            break;
    }
    return change_state;
}


int main()
{
    // init state
    states state;
    // set state
    state = MENU;

    // init player
    Player player;

    // menu loop
    while(state == MENU)
    {
        clear_screen();
        state = menu();
    }

    // character creation
    if(state == CREATION)
    {
        player.Create();

        // TODO: Next three lines are for tests. Delete later.
        std::cout << "Hello, " << player.Get_username() << std::endl;
        player.Display();
    }

    return 0;
}

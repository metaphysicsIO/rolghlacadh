#include <iostream>
#include <string>

#include "player.h"
#include "game.h"

// TODO: load/view character
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


    // TODO: Create play-state loop


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

        // Show what was created.
        player.Display();

        // TODO: Offer to save character.

        // Change back to menu state.
        //state == MENU;
    }




    return 0;
}

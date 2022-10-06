#include <iostream>
#include <string>

#include "game.h"

// Constructor
Game::Game(){
    // TODO: game states w/ enum
    m_menu = true;
    m_playing = false;
}

void Game::menu()
{
    while(m_menu)
    {
        char input;
        std::cout << "\tc: Create character" << std::endl;
        std::cout << "\tq: Quit" << std::endl;
        
        std::cin >> input;
        
        menu_select(input);

        if(m_playing)
        {
            // TODO: Send to function for playing
            std::cin.ignore();
        }
    }
}

void Game::menu_select(char input)
{
    switch(input)
    {
        case 'c':
            m_playing = true;
            m_menu = false;
            break;
        case 'q':
            m_menu = false;
            break;
        default:
            std::cout << "Bad input." << std::endl;
            break;
    }
}

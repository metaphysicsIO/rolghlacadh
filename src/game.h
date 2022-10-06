#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>

class Game
{
    public:
        Game();
        void menu();
        void menu_select(char input);
    private:
        bool m_playing = false;
        bool m_menu = false;
};

#endif

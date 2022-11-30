#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>

class Player
{
    public:
        Player();
        int Roll(int dice);
        void Set_username(std::string input_name);
        std::string Get_username();
        void Set_attributes(int stat, int value);
        int Get_attribute(int stat);
        void Print_attributes();
    private:
        std::string m_username;
        std::vector<int> m_attributes;
        std::vector<std::string> m_attribute_names;
};

#endif

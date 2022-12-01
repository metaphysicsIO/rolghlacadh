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
        void Create();
        void Display();
        void Set_username();
        std::string Get_username();
        void Set_attributes(int stat, int value);
        int Get_attribute(int stat);
        void Set_race(std::string race);
        std::string Get_race();
        void Set_class(std::string job);
        std::string Get_class();
        void Print_attributes();
        void Generate_stats();
    private:
        std::string m_username;
        std::string m_race;
        std::string m_class;
        std::vector<int> m_attributes;
        std::vector<std::string> m_attribute_names;
};

#endif

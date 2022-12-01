#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "player.h"

// Constructor init
Player::Player() : m_username("none"), m_race("none"), m_class("none"){

    // Create seed.
    srand(time(0));

    // TODO: Make this less sloppy, better defaults.
    m_attributes.resize(5);
    for(unsigned long int i = 0; i < m_attributes.size(); ++i)
    {
        Set_attributes(i, 8);
    }
    m_attribute_names.resize(5);
    m_attribute_names.at(0) = "STR";
    m_attribute_names.at(1) = "DEX";
    m_attribute_names.at(2) = "CON";
    m_attribute_names.at(3) = "INT";
    m_attribute_names.at(4) = "CHA";
}

// Stat rolling
int Player::Roll(int dice)
{
    return (rand() % dice);
}

// Character creation
void Player::Create()
{
    // TODO: Character creation screen.
    std::cout << "TODO: Implement Player::Create()" << std::endl;
}

void Player::Display()
{
    //TODO: Make this prettier.
    std::cout << "Name: " << Get_username() << std::endl;
    std::cout << "Race: " << Get_race() << std::endl;
    std::cout << "Class: " << Get_class() << std::endl;
    Print_attributes();
}


void Player::Set_username(const std::string input_name)
{
    std::cout << "Set your name: ";
    getline(std::cin, m_username);
}

std::string Player::Get_username()
{
    return m_username;
}

void Player::Set_attributes(int stat, int value)
{
    m_attributes.at(stat) = value;
}

int Player::Get_attribute(int stat)
{
    return m_attributes.at(stat);
}

void Player::Set_race(std::string race)
{
    m_race = race;
}

std::string Player::Get_race()
{
    //TODO: Implement race
    return m_race;
}

void Player::Set_class(std::string job)
{
    // job because "class" is a protected word.
    m_class = job;
}
std::string Player::Get_class()
{
    // TODO: Implement class
    return m_class;
}

void Player::Print_attributes()
{
    for(unsigned long int i = 0; i < m_attributes.size(); ++i)
    {
        std::cout << "\t" << m_attribute_names.at(i) << ": ";
        std::cout << m_attributes.at(i) << std::endl;
    }
}

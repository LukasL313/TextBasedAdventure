#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <string>

class Player {
private:
    std::string name;
    int level;
    int HP;
    int MP;
    int strength;
    int vitality;
    int agility;
    int Intelligence;

public:
    Player();
    
    std::string returnName();
    int returnLevel();
    int returnHP();
    int returnMP();
    int returnStrength();
    int returnVitality();
    int returnAgility();
    int returnIntelligence();
    
    void displayStat() const;
};

void stats();

#endif 
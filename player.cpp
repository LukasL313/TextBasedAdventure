#include <iostream>
#include <string>
#include <string.h>

#include "player.hpp"


Player::Player() : name(""), level(0), HP(0), MP(0), strength(0), vitality(0), agility(0), Intelligence(0) {}

   std::string Player::returnName()
   {
    return name;
   }

  int Player::returnLevel()
  {
    return level;
  }

  int Player::returnHP() 
  {
    return HP;
  }

  int Player::returnMP() 
  {
    return MP;
  }

  int Player::returnStrength() 
  {
    return strength;
  }

  int Player::returnVitality() 
  {
    return vitality;
  }

  int Player::returnAgility() 
  {
    return agility;
  }

  int Player::returnIntelligence()
  {
    return Intelligence;
  }

  void Player::displayStat() const
  {
    std::cout << "Player:" << name << std::endl; 
    std::cout << "Levels:" << level << std::endl;
    std::cout << "Health:" << HP << std::endl; 
    std::cout << "Mana Points:" << MP << std::endl;
    std::cout << "Strength:" << strength << std::endl;
    std::cout << "Vitality;" << vitality << std::endl;
    std::cout << "Agility:" << agility << std::endl;
    std::cout << "Intelligence:" << Intelligence << std::endl;
  }


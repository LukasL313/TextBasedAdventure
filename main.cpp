
#include <iostream>
#include <vector>
#include <string.h>
#include <string>
#include <fstream>

#include "player.hpp"

void statP()
{
        std::cout << " *-----[ Your Stats ]-----*" << "\n" << std::endl;
          Player player;
          player.displayStat();
}

void gMenu()
{
  int cMenu;
  std::cout << "\t\t____________________________________\n\n";
  std::cout << "\t\t  WELCOME,                          \n\n";
  std::cout << "\t\t  PLAYER.                           \n\n";
  std::cout << "\t\t____________________________________\n\n";
  std::cout << "\t\t                                    \n\n";
  std::cout << "\t\t  1. Type 1 to begin                \n\n";
  std::cout << "\t\t  2. Type 2 to quit                 \n\n";
  std::cout << "\t\t  3. Type 3 to go back              \n\n";
  std::cout << "\t\t                                    \n\n";
  std::cout << "\t\t____________________________________\n\n";

  std::cin >> cMenu;
}

void pMenu()
{
   int plMenu;
  std::cout << "\t\t____________________________________\n\n";
  std::cout << "\t\t  WELCOME,                          \n\n";
  std::cout << "\t\t  PLAYER.                           \n\n";
  std::cout << "\t\t____________________________________\n\n";
  std::cout << "\t\t                                    \n\n";
  std::cout << "\t\t  1. Type 1 for start menu          \n\n";
  std::cout << "\t\t  2. Type 2 for character overview  \n\n";
  std::cout << "\t\t                                    \n\n";
  std::cout << "\t\t____________________________________\n\n"; 
  std::cin >> plMenu;
  
  switch (plMenu)
  {
  case 1:
   gMenu();
    break;
  case 2:
      
   break;
  default:
    break;
  }
  
}



int main()
{ 
    pMenu();

    return 0;
}

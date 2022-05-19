#include <iostream>

#include "lib/calc.hpp"

int main( void )
{
  std::string choice;
  
  std::cout << "Which equation would you like me to calculate?" << std::endl
            << "\"ke\" = kinetic energy," << std::endl
            << "\"epe\" = elastic potential energy" << std::endl
            << "\"gpe\" = gravitational potential energy" << std::endl
            << "Choice : "
  ;
  
  std::cin >> choice;
    
  if(choice == "ke")
  {
    kineticEnergy();
  } else if (choice == "epe")
  {
    elasticPotentialEnergy();
  } else
  {
    std::cout << "I don't think i know that equation, try again?" << std::endl;
  }
    
  return 0;
}
#ifndef _CALC_H
#define _CALC_H

#include <cmath>

void kineticEnergy( void )
{
  // kinetic energy = 0.5 × mass × (speed)^2 
  float kineticEnergy, mass, speed;
  
  std::cout << "Enter mass : ";
  std::cin >> mass;
  
  std::cout << "Enter speed : ";
  std::cin >> speed;

  kineticEnergy = (0.5 * mass) * pow(speed, 2);

  std::cout << "Kinetic Energy : " << kineticEnergy << std::endl;
}

void elasticPotentialEnergy( void )
{
  // elastic potential energy = 0.5 × spring constant × (extension)^2
  float elasticPotentialEnergy, springConstant, extension;
  
  std::cout << "Enter spring constant : ";
  std::cin >> springConstant;

  std::cout << "Enter extension : ";
  std::cin >> extension;

  elasticPotentialEnergy = (0.5 * springConstant) * pow(extension, 2);

  std::cout << "Elastic Potential Energy : " << elasticPotentialEnergy << std::endl;
}

void gravitationalPotentialEnergy( void )
{
  // gravitational potential energy = mass × gravitational field strength × height
  float gravitationalPotentialEnergy, mass, gravitationalFieldStrength, height;

  std::cout << "Enter mass : ";
  std::cin >> mass;

  std::cout << "Enter Gravitational Field Strength : ";
  std::cin >> gravitationalFieldStrength;

  std::cout << "Enter height : ";
  std::cin >> height;

  gravitationalPotentialEnergy = mass * gravitationalFieldStrength * height;

  std::cout << "Gravitational potential energy : " << gravitationalPotentialEnergy << std::endl;
}

void changeInThermalENergy( void )
{
  // change in thermal energy = mass × specific heat capacity × temperature change
  float changeInThermalEnergy, mass, specificHeatCapacity, temperatureChange;

  std::cout << "Enter mass : ";
  std::cin >> mass;

  std::cout << "Enter Specific Heat Capacity : ";
  std::cin >> specificHeatCapacity;

  std::cout << "Enter Temperature Change : ";
  std::cin >> temperatureChange;

  changeInThermalEnergy = mass * specificHeatCapacity * temperatureChange;

  std::cout << "Change in Thermal energy : " << changeInThermalEnergy << std::endl;  
}

#endif
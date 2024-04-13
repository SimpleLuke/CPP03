/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:28:44 by llai              #+#    #+#             */
/*   Updated: 2024/04/12 15:43:35 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.class.hpp"

#include <iostream>
#include <string>

#include "../includes/Colors.h"

ScavTrap::ScavTrap(void) : ClapTrap()
{
  std::cout << BLUE << this->_name << ": ScavTrap Contructor called" RESET
            << std::endl;
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
  std::cout << BLUE << this->_name << ": ScavTrap Contructor called" RESET
            << std::endl;
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap() { *this = src; }

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
  if (this != &src)
  {
    this->_name = src.getName();
    this->_hitPoints = src.getHitPoints();
    this->_energyPoints = src.getEnergyPoints();
    this->_attackDamage = src.getAttactDamage();
  }
  return *this;
}

ScavTrap::~ScavTrap()
{
  std::cout << PURPLE << this->_name << ": ScavTrap Destructor called" PURPLE
            << std::endl;
}

void ScavTrap::guardGate(void)
{
  if (this->getHitPoints() < 1)
    std::cout << WHITE"ClapTrap " << this->getName()
              << " is broken. They can't turn on Gate keeper mode!" RESET
              << std::endl;
  else
    std::cout << WHITE"ClapTrap " << this->getName()
              << " is now on Gate keeper mode!" RESET << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
  if (this->getHitPoints() < 1)
  {
    std::cout << YELLOW "ScavTrap " << this->getName()
              << " is broken. They can't attack!" RESET << std::endl;
    return;
  }
  if (this->getEnergyPoints() < 1)
  {
    std::cout << YELLOW "ScavTrap " << this->getName()
              << " is out of energy point. They can't attack!" RESET
              << std::endl;
    return;
  }

  if (this->getName() == target)
    std::cout << YELLOW << "ScavTrap " << this->getName()
              << " attacks themselves, causing " << this->getAttactDamage()
              << " points of damage!" RESET << std::endl;
  else
    std::cout << YELLOW << "ScavTrap " << this->getName() << " attacks "
              << target << ", causing " << this->getAttactDamage()
              << " points of damage!" RESET << std::endl;
  this->_energyPoints--;
  return;
}

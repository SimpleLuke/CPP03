/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:00:41 by llai              #+#    #+#             */
/*   Updated: 2024/02/18 16:57:17 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.class.hpp"

#include <iostream>
#include <string>

#include "../includes/Colors.h"

ClapTrap::ClapTrap(void)
    : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
  std::cout << BLUE << this->_name << ": ClapTrap Contructor called" RESET
            << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
  std::cout << BLUE << this->_name << ": ClapTrap Contructor called" RESET
            << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
    : _name(src.getName()),
      _hitPoints(src.getHitPoints()),
      _energyPoints(src.getEnergyPoints()),
      _attackDamage(src.getAttactDamage())
{
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
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

ClapTrap::~ClapTrap()
{
  std::cout << PURPLE << this->_name << ": ClapTrap Destructor called" PURPLE
            << std::endl;
}
std::string const &ClapTrap::getName(void) const { return this->_name; }

unsigned int ClapTrap::getHitPoints(void) const { return this->_hitPoints; }
unsigned int ClapTrap::getEnergyPoints(void) const
{
  return this->_energyPoints;
}
unsigned int ClapTrap::getAttactDamage(void) const
{
  return this->_attackDamage;
}

void ClapTrap::attack(const std::string &target)
{
  if (this->getHitPoints() < 1)
  {
    std::cout << GREEN "ClapTrap " << this->getName()
              << " is broken. They can't attack!" RESET << std::endl;
    return;
  }
  if (this->getEnergyPoints() < 1)
  {
    std::cout << GREEN "ClapTrap " << this->getName()
              << " is out of energy point. They can't attack!" RESET
              << std::endl;
    return;
  }

  if (this->getName() == target)
    std::cout << GREEN << "ClapTrap " << this->getName()
              << " attacks themselves, causing " << this->getAttactDamage()
              << " points of damage!" RESET << std::endl;
  else
    std::cout << GREEN << "ClapTrap " << this->getName() << " attacks "
              << target << ", causing " << this->getAttactDamage()
              << " points of damage!" RESET << std::endl;
  this->_energyPoints--;
  return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (this->getHitPoints() > 0)
  {
    if (amount > this->getHitPoints())
      this->_hitPoints = 0;
    else
      this->_hitPoints -= amount;
    std::cout << RED << "ClapTrap " << this->getName() << " takes " << amount
              << " points of damage! They have " << this->getHitPoints()
              << " hit points!" RESET << std::endl;
    if (this->_hitPoints <= 0)
      std::cout << RED << "ClapTrap " << this->getName() << " is broken!" RESET
                << std::endl;
    return;
  }
  else
  {
    std::cout << RED << "ClapTrap " << this->getName()
              << " is already broken!" RESET << std::endl;
    return;
  }
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (this->getHitPoints() < 1)
  {
    std::cout << CYAN << "ClapTrap " << this->getName()
              << " is broken. They can't be repaired!" RESET << std::endl;
    return;
  }
  if (this->getEnergyPoints() < 1)
  {
    std::cout << CYAN << "ClapTrap " << this->getName()
              << " is out of energy point. They can't repair!" RESET
              << std::endl;
    return;
  }
  this->_energyPoints--;
  this->_hitPoints += amount;
  std::cout << CYAN "ClapTrap " << this->getName() << " repairs " << amount
            << " of points of hit points back! They have "
            << this->getHitPoints() << " hit points now!" RESET << std::endl;
  return;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:28:33 by llai              #+#    #+#             */
/*   Updated: 2024/02/18 23:16:57 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.class.hpp"

#include <iostream>
#include <string>

#include "../includes/Colors.h"

DiamondTrap::DiamondTrap(void) : FragTrap(), ScavTrap()
{
  std::cout << BLUE << this->_name << ": DiamondTrap Contructor called" RESET
            << std::endl;
  this->_hitPoints = FragTrap::getHitPoints();
  this->_energyPoints = ScavTrap::getEnergyPoints();
  this->_attackDamage = FragTrap::getAttactDamage();
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
  std::cout << BLUE << this->_name << ": DiamondTrap Contructor called" RESET
            << std::endl;
  this->_hitPoints = FragTrap::getHitPoints();
  this->_energyPoints = ScavTrap::getEnergyPoints();
  this->_attackDamage = FragTrap::getAttactDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : FragTrap(), ScavTrap()
{
  *this = src;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
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

DiamondTrap::~DiamondTrap()
{
  std::cout << PURPLE << this->_name << ": DiamondTrap Destructor called" PURPLE
            << std::endl;
}

void DiamondTrap::whoAmI(void)
{
  std::cout << BLUE "I am " << this->_name << "! My ClapTrap name is "
            << ClapTrap::_name << "!" RESET << std::endl;
}

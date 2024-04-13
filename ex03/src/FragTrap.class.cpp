/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:28:44 by llai              #+#    #+#             */
/*   Updated: 2024/04/12 15:43:52 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.class.hpp"

#include <iostream>
#include <string>

#include "../includes/Colors.h"

FragTrap::FragTrap(void) : ClapTrap()
{
  std::cout << BLUE << this->_name << ": FragTrap Contructor called" RESET
            << std::endl;
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
  std::cout << BLUE << this->_name << ": FragTrap Contructor called" RESET
            << std::endl;
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap() { *this = src; }

FragTrap &FragTrap::operator=(const FragTrap &src)
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

FragTrap::~FragTrap()
{
  std::cout << PURPLE << this->_name << ": FragTrap Destructor called" PURPLE
            << std::endl;
}

void FragTrap::highFivesGuys(void)
{
  if (this->getHitPoints() < 1)
    std::cout << YELLOW"FragTrap " << this->getName()
              << " is broken. They can't high fives!" RESET
              << std::endl;
  else
    std::cout << YELLOW"FragTrap " << this->getName()
              << " Yo! Give me FIVE!" RESET << std::endl;
}

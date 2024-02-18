/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:57:41 by llai              #+#    #+#             */
/*   Updated: 2024/02/18 23:21:18 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.class.hpp"
#include "../includes/DiamondTrap.class.hpp"
#include "../includes/FragTrap.class.hpp"
#include "../includes/ScavTrap.class.hpp"

int main(void)
{
  ClapTrap robotC("Fred");
  ScavTrap robotS("Luke");
  FragTrap robotF("Eliot");
  DiamondTrap robotD("JJ");

  robotD.whoAmI();
  robotD.attack("Luke");
  robotS.takeDamage(0);
  robotS.attack("Fred");
  robotC.takeDamage(robotS.getAttactDamage());
  robotD.highFivesGuys();
  robotD.guardGate();
  robotD.takeDamage(1000);
  robotD.beRepaired(1000);
  robotD.whoAmI();
}

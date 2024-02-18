/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:57:41 by llai              #+#    #+#             */
/*   Updated: 2024/02/18 17:10:32 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.class.hpp"
#include "../includes/ScavTrap.class.hpp"
#include "../includes/FragTrap.class.hpp"

int main(void)
{
	ClapTrap robotC("Fred");
	ScavTrap robotS("Luke");
	FragTrap robotF("Eliot");

	robotC.attack("Luke");
	robotS.takeDamage(0);
	robotS.attack("Fred");
	robotC.takeDamage(robotS.getAttactDamage());
	robotS.guardGate();
	robotF.attack("Luke");
	robotS.takeDamage(robotF.getAttactDamage());
	robotS.guardGate();
	robotF.highFivesGuys();
	for (int i = 0; i < 100; ++i)
		robotF.beRepaired(1);
	robotF.takeDamage(200);
	robotF.highFivesGuys();

}

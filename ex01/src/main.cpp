/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:57:41 by llai              #+#    #+#             */
/*   Updated: 2024/02/18 16:55:39 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.class.hpp"
#include "../includes/ScavTrap.class.hpp"

int main(void)
{
	ClapTrap robotC("Fred");
	ScavTrap robotS("Luke");

	robotC.attack("Luke");
	robotS.takeDamage(0);
	robotS.attack("Fred");
	robotC.takeDamage(robotS.getAttactDamage());
	robotS.guardGate();
	robotS.takeDamage(200);
	robotS.guardGate();
}

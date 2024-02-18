/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:57:41 by llai              #+#    #+#             */
/*   Updated: 2024/02/18 15:07:48 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.class.hpp"

int main(void)
{
  ClapTrap robot1("Fred");
  ClapTrap robot2("Eilot");

  for (int i = 0; i < 12; ++i)
  {
    robot1.attack("Eilot");
  }

  for (int i = 0; i < 12; ++i)
  {
    robot2.beRepaired(2);
  }

  for (int i = 0; i < 4; ++i)
  {
    robot1.takeDamage(6);
  }
}

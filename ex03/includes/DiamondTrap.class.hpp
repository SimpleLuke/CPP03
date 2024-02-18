/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:24:47 by llai              #+#    #+#             */
/*   Updated: 2024/02/18 23:06:34 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_HPP
#define DIAMONDTRAP_CLASS_HPP

#include <string>

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
 public:
  DiamondTrap();
  DiamondTrap(std::string name);
  DiamondTrap(const DiamondTrap &src);
  DiamondTrap &operator=(const DiamondTrap &src);
  ~DiamondTrap();

  using ScavTrap::attack;

  void	whoAmI(void);

 private:
  std::string _name;
};

#endif  // !DIAMONDTRAP_CLASS_HPP

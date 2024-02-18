/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:18:19 by llai              #+#    #+#             */
/*   Updated: 2024/02/18 17:32:46 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP

#include <string>

#include "ClapTrap.class.hpp"

class ScavTrap : virtual public ClapTrap
{
 public:
  ScavTrap(void);
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap &src);
  ScavTrap &operator=(const ScavTrap &src);
  ~ScavTrap();

  void guardGate(void);

 private:
};

#endif  // !SCAVTRAP_CLASS_HPP

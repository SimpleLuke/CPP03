/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:58:43 by llai              #+#    #+#             */
/*   Updated: 2024/02/18 16:44:23 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
#define CLAPTRAP_CLASS_HPP

#include <string>
class ClapTrap
{
 public:
  ClapTrap(void);
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap &);
  ClapTrap &operator=(const ClapTrap &);
  ~ClapTrap();

  std::string const &getName(void) const;
  unsigned int getHitPoints(void) const;
  unsigned int getEnergyPoints(void) const;
  unsigned int getAttactDamage(void) const;

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

 protected:
  std::string _name;
  unsigned int _hitPoints;
  unsigned int _energyPoints;
  unsigned int _attackDamage;

 private:
};

#endif  // !CLAPTRAP_CLASS_HPP

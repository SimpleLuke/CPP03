/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:03:11 by llai              #+#    #+#             */
/*   Updated: 2024/02/18 17:04:49 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
#define FRAGTRAP_CLASS_HPP

#include <string>

#include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap
{
 public:
  FragTrap(void);
  FragTrap(std::string name);
  FragTrap(const FragTrap &src);
  FragTrap &operator=(const FragTrap &src);
  ~FragTrap();

  void highFivesGuys(void);

 private:

};

#endif  // !FRAGTRAP_CLASS_HPP

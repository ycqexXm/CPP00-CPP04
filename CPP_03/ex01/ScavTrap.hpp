/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:18:30 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/28 13:31:50 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		//Constructors
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &copy);

		//Destructor
		~ScavTrap();

		//Overload of the assignment operator
		ScavTrap &operator=(const ScavTrap &copy);

		//Public methods
		void	attack(const std::string &target);
		void	guardGate();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:19:10 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/28 13:31:54 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		//Constructors
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &copy);

		//Destructor
		~FragTrap();

		//Overload of the assignment operator
		FragTrap &operator=(const FragTrap &copy);

		//Public methods
		void	highFivesGuys(void);
};

#endif
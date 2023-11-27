/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:02:04 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 14:15:13 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"
#include <iostream>

/*Represent a human with a name and a weapon*/
class HumanB
{
	private:
			std::string	name;
			Weapon 		*weapon;

	public:
			/*Public methods to set the weapon and attack*/
			HumanB(const std::string name);
			void	attack();
			void	setWeapon(Weapon &WP);
};

#endif
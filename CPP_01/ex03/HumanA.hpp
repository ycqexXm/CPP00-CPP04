/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:01:25 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 14:11:41 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

/*Represent a human with a name and a weapon*/
class HumanA
{
	private:
			std::string	name;
			Weapon &weapon;
	public:
			/*Public methods used to attack*/
			HumanA(const std::string name, Weapon &WP);
			void	attack() const;
};

#endif
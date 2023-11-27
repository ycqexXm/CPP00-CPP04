/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:02:27 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 14:09:05 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

/*Represent a weapon with a type*/
class Weapon
{
	private:
			std::string	type;

	public:
			/*Public methods to get and set the type*/
			const std::string &getType() const;
			void setType(const std::string newType);
			Weapon(const std::string type);
};

#endif
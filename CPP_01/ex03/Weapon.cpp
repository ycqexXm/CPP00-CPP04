/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:02:20 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 14:10:53 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*Constructor for the Weapon class
Initialize the 'type' with the provided argument*/
Weapon::Weapon(const std::string type)
{
	this -> type =type;
}

/*Return the type of the weapon*/
const std::string &Weapon::getType() const
{
	return (this -> type);
}

/*Set the type of the weapon to the provided string*/
void	Weapon::setType(const std::string newType)
{
	this -> type = newType;
}

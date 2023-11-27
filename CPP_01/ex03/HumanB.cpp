/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:01:55 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 14:16:25 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*Constructor for the HumanB class. Initialize the 'name'
with the provided arguments*/
HumanB::HumanB(const std::string name)
{
	this -> name = name;
}

/*Set the weapon of the human to the provided weapon*/
void	HumanB::setWeapon(Weapon &WP)
{
	weapon = &WP;
}

/*Print a message indicating that the human is attacking with their weapon*/
void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon -> getType() << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:01:16 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 14:14:24 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*Constructor for the HumanA class. Initialize the 'name' and
'weapon' with the provided arguments*/
HumanA::HumanA(const std::string name, Weapon& WP) : weapon(WP)
{
	this -> name = name;
}

/*Print a message indicating that the human is attacking with their weapon*/
void	HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:49:32 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 16:31:24 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*Constructor for the Zombie class. Init the name of the zombie
and print a message indicating that the zombie was created*/
Zombie::Zombie(std::string zombie_name):name(zombie_name)
{
	std::cout << name << " was born" << std::endl;
}

/*Print message after name of zombie*/
void	Zombie::announce(void)
{
	std::cout << this -> name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/*Destructor for the Zombie class*/
Zombie::~Zombie(void)
{
	std::cout << name << " died(finally)" << std::endl;
}

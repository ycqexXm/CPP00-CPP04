/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:31:41 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 16:31:05 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*Constructor for the Zombie class*/
Zombie::Zombie()
{
	return ;
}

/*Parameterized constructor for the Zombie class.
Initializes the ~zombie_name~ member*/
Zombie::Zombie(std::string name) : zombie_name(name)
{
	return ;
}

/*Destructor for the Zombie class*/
Zombie::~Zombie()
{
	std::cout << zombie_name <<  " died (finally)" << std::endl;
}

/*Announce the zombie*/
void	Zombie::announce(void) const
{
	std::cout << zombie_name << ": *hungry zombie noise*" << std::endl;
}

/*Set the zombie name*/
void	Zombie::GiveName(std::string name)
{
	zombie_name = name;
}

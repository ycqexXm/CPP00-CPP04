/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:31:41 by yorlians          #+#    #+#             */
/*   Updated: 2023/10/27 11:03:08 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : zombie_name("Michael Wave")
{
	return ;
}

Zombie::Zombie(std::string name) : zombie_name(name)
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << zombie_name <<  " died" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << zombie_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::GiveName(std::string name)
{
	zombie_name = name;
}

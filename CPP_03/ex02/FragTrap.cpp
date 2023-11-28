/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:19:18 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/28 13:31:12 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

/*FragTrap constructor. Inherit from ClapTrap and initialize
FragTrap specific attributes*/
FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	Name = name;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "\nFragTrap " << Name << " constructed\n" << std::endl;
}

/*FragTrap copy constructor. Inherit from ClapTrap and copy
FragTrap specific attributes from the provided object*/
FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	Name = copy.Name;
	HitPoints = copy.HitPoints;
	EnergyPoints = copy.EnergyPoints;
	AttackDamage = copy.AttackDamage;
}

/*Overload of the assignment operator. It assigns the values of an existing
FragTrap to another*/
FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	Name = copy.Name;
	HitPoints = copy.HitPoints;
	EnergyPoints = copy.EnergyPoints;
	AttackDamage = copy.AttackDamage;
	return (*this);
}

/*Print message indicating that FragTrap wants a high five*/
void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << Name << " want a high five. right now." << std::endl;
}

/*FragTrap destructor*/
FragTrap::~FragTrap()
{
	std::cout << "\nFragTrap " << Name << " destructed\n" << std::endl;
}
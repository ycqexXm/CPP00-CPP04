/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:18:33 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/28 13:30:54 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/*ScavTrap constructor. Inherit from ClapTrap and initialize ScavTrap
specific attributes*/
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	Name = name;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "\nScavTrap " << Name << " constructed\n" << std::endl;
}

/*ScavTrap attack function. Check if ScavTrap has enough energy
and hit points to attack. It it can attack, a message will be printed and
energy points decrease by 1*/
void	ScavTrap::attack(const std::string &target)
{
	Target = target;
	if (EnergyPoints == 0)
		std::cout << "ScavTrap " << Name << " is too tired for this. He doesn't have energy to attack " << target << ". The peace has come..." << std::endl;
	else if (HitPoints == 0)
		std::cout << "ScavTrap " << Name << " is already dead. He cannot attack " << target << " anymore!" << std::endl;
	else if (AttackDamage == 0)
		std::cout << "ScavTrap " << Name << " attacks " << target << " not causing any damage. This is pointless..." << std::endl;
	else
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoints--;
}

/*ScavTrap copy constructor. Inherit from ClapTrap and copy specific
attributes from the provided object*/
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	Name = copy.Name;
	HitPoints = copy.HitPoints;
	EnergyPoints = copy.EnergyPoints;
	AttackDamage = copy.AttackDamage;
}

/*Overload of the assignment operator. It assigns the values of an existing
ScavTrap to another*/
ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	Name = copy.Name;
	HitPoints = copy.HitPoints;
	EnergyPoints = copy.EnergyPoints;
	AttackDamage = copy.AttackDamage;
	return (*this);
}

/*Print message indicating that ScavTrap is now in Gate keeper mode*/
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode..." << std::endl;
}

/*ScavTrap destructor*/
ScavTrap::~ScavTrap()
{
	std::cout << "\nScavTrap " << Name << " destructed\n" << std::endl;
}
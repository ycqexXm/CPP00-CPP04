/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:17:49 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/27 17:45:58 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*Constructor that initializes a ClapTrap with a given name.
Sets initial HitPoints, EnergyPoints and AttackDamage*/
ClapTrap::ClapTrap(const std::string name)
{
	Name = name;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	std::cout << "\nClapTrap constructor called\n" << std::endl;
}

/*Copy constructor that creates a new ClapTrap as a copy of
an existing one*/
ClapTrap::ClapTrap(const ClapTrap &copy) : Name(copy.Name), HitPoints(copy.HitPoints), EnergyPoints(copy.EnergyPoints), AttackDamage(copy.AttackDamage) { }

/*Attack by the ClapTrap on a given target.
Decrease EnergyPoints by 1 after each attack*/
void	ClapTrap::attack(const std::string &target)
{
	Target = target;
	if (EnergyPoints == 0)
		std::cout << "ClapTrap " << Name << " is too tired for this. He doesn't have energy to attack " << target << ". The peace has come..." << std::endl;
	else if (HitPoints == 0)
		std::cout << "ClapTrap " << Name << " is already dead. He cannot attack " << target << " anymore!" << std::endl;
	else if (AttackDamage == 0)
		std::cout << "ClapTrap " << Name << " attacks " << target << " not causing any damage. This is pointless..." << std::endl;
	else
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoints--;
}

/*ClapTrap taking damage.
Decrease HitPoints by the amount of damage taken*/
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints == 0)
		std::cout << "ClapTrap " << Name << " is already dead. Stop attacking him " << Target << "!" << std::endl;
	else
		std::cout << "ClapTrap " << Name << " took " << amount << " points of damage...ouch..." << std::endl;
	if (HitPoints >= amount)	
		HitPoints -= amount;
	else
		HitPoints = 0;
}

/*ClapTrap being repaired. Increase HitPoints
by the amount of repair and decreases EnergyPoints by 1*/
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints <= 0)
		std::cout << "ClapTrap " << Name << " doesn't have energy to get repaired. Morizio I cannot move it move it anymore..." << std::endl;
	else if (HitPoints <= 0)
		std::cout << "ClapTrap " << Name << " is already dead. Its too late for reparations..." << std::endl;
	else
	{
		std::cout << "ClapTrap " << Name << " got repaired and got " << amount << " points back. Yay!" << std::endl;
		HitPoints += amount;
		EnergyPoints--;
	}
}

/*Destructor that is called when a ClapTrap is destroyed*/
ClapTrap::~ClapTrap()
{
	std::cout << "\nClapTrap destructor called\n" << std::endl;
}

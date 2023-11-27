/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:17:15 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/27 16:52:34 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap	bob("Bob");

	bob.attack("Joe Mama");
	bob.takeDamage(5);
	bob.beRepaired(5);
	bob.highFivesGuys();
	std::cout << std::endl;
	
    bob.attack("Michael Wave");
    bob.takeDamage(30);
    bob.beRepaired(0);
    bob.highFivesGuys();
	std::cout << std::endl;

    bob.attack("Tonny Pizza");
    bob.takeDamage(100);
    bob.beRepaired(7);
    bob.highFivesGuys();
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:17:15 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/27 14:25:30 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	kevin("Kevin");

	kevin.attack("Joe Mama");
	kevin.takeDamage(30);
	kevin.beRepaired(3);
	kevin.guardGate();
	std::cout << std::endl;

    kevin.attack("Tony Pizza");
    kevin.takeDamage(500);
    kevin.beRepaired(2);
    kevin.guardGate();
	std::cout << std::endl;

    kevin.attack("Michael Wave");
    kevin.takeDamage(7);
    kevin.beRepaired(5);
    kevin.guardGate();

	return (0);
}
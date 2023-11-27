/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:17:15 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/27 17:09:37 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	bob("Bob");

    bob.attack("Joe Mama");
    bob.takeDamage(3);
    bob.beRepaired(3);
	std::cout << std::endl;

    bob.attack("Michael Wave");
    bob.takeDamage(5);
    bob.beRepaired(2);
	std::cout << std::endl;

    bob.attack("Tony Pizza");
    bob.takeDamage(7);
    bob.beRepaired(5);

    return (0);
}
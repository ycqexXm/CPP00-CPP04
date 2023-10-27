/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:31:35 by yorlians          #+#    #+#             */
/*   Updated: 2023/10/27 10:51:33 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	Zombie			*horde;
	int				zombie_num;
	std::string		name = "zombie";

	if (ac == 1 || atoi(av[1]) <= 0)
		zombie_num = 10;
	else
		zombie_num = atoi(av[1]);
	if (ac >= 3)
		name = av[2];
	horde = zombieHorde(zombie_num, name);
	for (int i = 0; i < zombie_num; i++)
		horde[i].announce();
	delete [] horde;
	std::cout << "The horde of " << zombie_num << " zombies was destroyed." << std::endl;
	return (0);
}
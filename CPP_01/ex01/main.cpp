/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:31:35 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 16:31:02 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*Create a horde of ~zombie_num~ zombies with a name ~name~.
Each zombie in the horde announces themselves. After what
the horde is destroyed*/
int	main(void)
{
	Zombie			*z_horde;
	std::string		name = "Bob";
	int				zombie_num = 13;

	z_horde = zombieHorde(zombie_num, name);
	for (int i = 0; i < zombie_num; i++)
		z_horde[i].announce();
	delete [] z_horde;
	std::cout << "The horde of " << zombie_num << " zombies was destroyed (finally)" << std::endl;
	return (0);
}

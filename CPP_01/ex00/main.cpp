/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:53:34 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 14:03:46 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*new_zombie;
	/*create zombie on the heap*/
	new_zombie = newZombie("Silent Joe");
	/*announce zombie*/
	new_zombie -> announce();
	/*delete zombie from the heap*/
	delete new_zombie;
	/*create temporary zombie on the stack*/
	randomChump("Bob");
	return (0);
}

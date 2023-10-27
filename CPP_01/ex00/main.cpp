/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:53:34 by yorlians          #+#    #+#             */
/*   Updated: 2023/10/26 19:29:58 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*new_zombie;
	new_zombie = newZombie("Silent Joe");
	new_zombie -> announce();
	delete new_zombie;
	randomChump("Bob");
	return (0);
}

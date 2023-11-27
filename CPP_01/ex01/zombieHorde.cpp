/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:33:52 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 13:34:37 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*Create a horde of N zombies with the given name*/
Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*z_horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		z_horde[i].GiveName(name);
	return (z_horde);
}

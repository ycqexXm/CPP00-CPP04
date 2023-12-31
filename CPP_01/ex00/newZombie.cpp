/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:53:30 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 14:03:23 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*Create a zombie on the heap and return it*/
Zombie	*newZombie(std::string name)
{
	Zombie	*new_zombie;

	new_zombie = new Zombie(name);
	return (new_zombie);
}

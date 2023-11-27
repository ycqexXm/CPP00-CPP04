/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:49:29 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 14:04:17 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
			std::string	name;

	public:
			/*Contructor*/
			Zombie(std::string zombie_name);
			/*Destructor*/
			~Zombie();
			/*Announce the zombie*/
			void	announce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
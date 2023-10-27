/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:49:29 by yorlians          #+#    #+#             */
/*   Updated: 2023/10/26 19:30:36 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
			std::string	name;

	public:
			Zombie(std::string zombie_name);
			~Zombie();
			void	announce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
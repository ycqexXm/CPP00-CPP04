/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:31:48 by yorlians          #+#    #+#             */
/*   Updated: 2023/10/27 10:51:24 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <stdlib.h>

class Zombie
{
	private:
			std::string		zombie_name;
	public:
			Zombie();
			Zombie(std::string name);
			~Zombie();

			void	GiveName(std::string);
			void	announce(void) const;
	
};

Zombie	*zombieHorde(int N, std::string name);

#endif
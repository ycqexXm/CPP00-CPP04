/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:31:48 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 13:33:05 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
			std::string		zombie_name;

	public:
			/*Constructor*/
			Zombie();
			Zombie(std::string name);

			/*Destructor*/
			~Zombie();

			void	GiveName(std::string name);
			void	announce(void) const;
	
};

Zombie	*zombieHorde(int N, std::string name);

#endif
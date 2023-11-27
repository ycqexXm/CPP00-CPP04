/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:47:03 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 15:22:39 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class	Harl
{
	private:
			void	debug();
			void	info();
			void	warning();
			void	error();

	public:
			/*Public method used to call one of the
			private methods based on the argument
			that it receives*/
			void	complain(std::string level);
};

/**/
typedef	void (Harl::*MemberFunction)() const;

#endif

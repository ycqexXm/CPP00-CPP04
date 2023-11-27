/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:47:10 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 14:57:10 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*Print debug message to the console*/
void	Harl::debug()
{
	std::cout << "\n[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n\n";
}

/*Print info message to the console*/
void	Harl::info()
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more\n\n";
}

/*Print warning message to the console*/
void	Harl::warning()
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n\n";
}

/*Print error message to the console*/
void	Harl::error()
{
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n\n";
}

/*Print message to the console depending on the level*/
void	Harl::complain(std::string level)
{
	/*Array of pointers to member functions*/
	void (Harl::*MemberFunction[4]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	/*Array of levels*/
	std::string	list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;
	/*Find the level*/
	while (list[i] != level && i < 4)
		i++;
	/*Call the function*/
	if (i < 4)
		(this->*(MemberFunction[i]))();
	else
		std::cout << "[INVALID_LEVEL]: " << level << std::endl << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:42:36 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 14:06:32 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

/*Demonstrate the use of pointers and references.
Create a string, a pointer to the string and a reference
to the string. Then print their adresses abd values*/
int	main(void)
{
	std::string	str;
	std::string	*stringPTR;
	std::string	&stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::cout << &str << "   : address of the string\n";
	std::cout << stringPTR << "   : address held by stringPTR\n";
	std::cout << &stringREF << "   : address held by stringREF\n";
	std::cout << str << " : value of string variable\n";
	std::cout << *stringPTR << " : value pointed to by stringPTR\n";
	std::cout << stringREF << " : value pointed to by stringREF\n";
	return (0);
}

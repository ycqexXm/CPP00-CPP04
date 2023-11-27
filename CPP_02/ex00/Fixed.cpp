/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:17:59 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/16 15:28:39 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*Default constructor. Called when an object of Fixed
class is created without any arguments*/
Fixed::Fixed() : fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/*Destructor. Called when an object of Fixed class is destroyed.
Frees the resources that the object acquired during it's existence*/
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/*Copy constructor. Called when an object of Fixed class is created as
a copy of another Fixed object. Init the new object to have the same 
state as the copied object*/
Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

/*Copt assignment operator. Called when one Fixed object is assigned
to another. Copy the state of the right-hand side object to the 
left-hand side object*/
Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixedPointValue = fixed.getRawBits();
	return (*this);
}

/*Getter function that returns the value of the "fixedPointValue"
member variable*/
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedPointValue);
}

/*Setter function that returns the value of the "fixedPointValue"
member variable to the argument passed in*/
void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	fixedPointValue = raw;
}
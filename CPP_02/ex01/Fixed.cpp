/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:42:49 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/16 16:02:21 by yorlians         ###   ########.fr       */
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

/*Int constructor. Called when an object of Fixed class is
created with int argument. Init member variable "fixedPointValue"
by shifting bits of int argument to the left by number of fractional bits*/
Fixed::Fixed(int const int_number)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPointValue = int_number << fractionalBits;
}

/*Float constructor. Called when an object of Fixed class is created
with float argument. Init the member variable "fixedPointValue" by
rounding float argument multiplied by 2 to the power of number of fractional bits*/
Fixed::Fixed(float const float_number)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPointValue = roundf(float_number * (1 << fractionalBits));
}

/*Copy constructor. Called when an object of Fixed class is created as
a copy of another Fixed object. Init the new object to have the same 
state as the copied object*/
Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

/*Copy assignment operator. Called when one Fixed object is assigned
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
	//std::cout << "getRawBits member function called" << std::endl;
	return (fixedPointValue);
}

/*Setter function that returns the value of the "fixedPointValue"
member variable to the argument passed in*/
void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	fixedPointValue = raw;
}

/*Convert fixed point value to a float by dividing it by 2 to the
power of number of fractional bits*/
float	Fixed::toFloat(void) const
{
	return ((float)fixedPointValue / (float)(1 << fractionalBits));
}

/*Convert the fixed point value to an integer by shifting its bits
to the right by number of fractional bits*/
int		Fixed::toInt(void) const
{
	return (fixedPointValue >> fractionalBits);
}

/*Overloaded << operator. Allows Fixed object to be outputted
to ostream object. Output the float representation of Fixed object*/
std::ostream &operator<<(std::ostream &output, Fixed const &fixed)
{
	output << fixed.toFloat();
	return (output);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:00:08 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/16 16:08:11 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*Default constructor. Init fixedPointValue to 0*/
Fixed::Fixed() : fixedPointValue(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

/*Destructor*/
Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

/*Int constructor. Init member variable "fixedPointValue"
by shifting bits of int argument to the left by number of fractional bits*/
Fixed::Fixed(int const int_number)
{
	//std::cout << "Int constructor called" << std::endl;
	fixedPointValue = int_number << fractionalBits;
}

/*Float constructor. Init the member variable "fixedPointValue" by
rounding float argument multiplied by 2 to the power of number of fractional bits*/
Fixed::Fixed(float const float_number)
{
	//std::cout << "Float constructor called" << std::endl;
	fixedPointValue = roundf(float_number * (1 << fractionalBits));
}

/*Copy constructor. Init the new object to have the same 
state as the copied object*/
Fixed::Fixed(Fixed const &fixed)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

/*Copy assignment operator. Copy the state of the right-hand side object to the 
left-hand side object*/
Fixed &Fixed::operator=(const Fixed &fixed)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	fixedPointValue = fixed.getRawBits();
	return (*this);
}

/*Getter function that returns the value of the "fixedPointValue"
member variable*/
int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (fixedPointValue);
}

/*Setter function that returns the value of the "fixedPointValue"
member variable to the argument passed in*/
void	Fixed::setRawBits(int const raw)
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

/*Comparison operators. Compare the float representation of the
Fixed objects*/
bool Fixed::operator>(Fixed fixed) const
{
	return (toFloat() > fixed.toFloat());
}

bool Fixed::operator<(Fixed fixed) const
{
	return (toFloat() < fixed.toFloat());
}

bool Fixed::operator>=(Fixed fixed) const
{
	return (toFloat() >= fixed.toFloat());
}

bool Fixed::operator<=(Fixed fixed) const
{
	return (toFloat() <= fixed.toFloat());
}

bool Fixed::operator==(Fixed fixed) const
{
	return (toFloat() == fixed.toFloat());
}

bool Fixed::operator!=(Fixed fixed) const
{
	return (toFloat() != fixed.toFloat());
}

/*Arithmetic operators. Perform operation on the float
representations of the Fixed objects and return a new
Fixed object*/
Fixed Fixed::operator+(Fixed fixed) const
{
	return (Fixed(toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(Fixed fixed) const
{
	return (Fixed(toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(Fixed fixed) const
{
	return (Fixed(toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(Fixed fixed) const
{
	return (Fixed(toFloat() / fixed.toFloat()));
}

/*pre-increment and decrement operators. Increase or decrease
fixedPointValue by 1*/
Fixed &Fixed::operator++()
{
	fixedPointValue++;
	return (*this);
}

Fixed &Fixed::operator--()
{
	fixedPointValue--;
	return (*this);
}

/*post-increment and decrement operators. Increase or decrease
fixedPointValue by 1, return the original value*/
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	operator++();
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	operator--();
	return (temp);
}

/*Return a reference to the Fixed object with smaller
fixedPointValue*/
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.fixedPointValue < b.fixedPointValue)
		return (a);
	return (b);
}

/*Return a reference to the Fixed object with 
larger fixedPointValue*/
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.fixedPointValue > b.fixedPointValue)
		return (a);
	return (b);
}

/*Return a const reference to the Fixed object with
the smaller fixed point value*/
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.fixedPointValue < b.fixedPointValue)
		return (a);
	return (b);
}

/*Return a const reference to the Fixed object with
the larger fixed point value*/
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.fixedPointValue > b.fixedPointValue)
		return (a);
	return (b);
}

/*Overloaded << operator. Allows Fixed object to be outputted
to ostream object. Output the float representation of Fixed object*/
std::ostream &operator<<(std::ostream &output, Fixed const &fixed)
{
	output << fixed.toFloat();
	return (output);
}
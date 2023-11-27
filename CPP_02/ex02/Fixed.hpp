/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:00:06 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/16 15:58:38 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

/******************************************************************************
*								  Libraries									  *
******************************************************************************/
#include <ostream>
#include <iostream>
#include <cmath>

/******************************************************************************
*							 Class	Fixed								 	  *
******************************************************************************/
class Fixed
{
	private:

			int					fixedPointValue;
			static const int	fractionalBits = 8;

	public:
			//constructors
			Fixed();
			Fixed(int const int_number);
			Fixed(float const float_number);
			Fixed(Fixed const &fixed);

			//destructor
			~Fixed();

		//overloaded operators
			Fixed &operator=(Fixed const &fixed);

			//comparison operators
			bool operator>(Fixed fixed) const;
			bool operator<(Fixed fixed) const;
			bool operator>=(Fixed fixed) const;
			bool operator<=(Fixed fixed) const;
			bool operator==(Fixed fixed) const;
			bool operator!=(Fixed fixed) const;

			//arithmetic operators
			Fixed operator+(Fixed fixed) const;
			Fixed operator-(Fixed fixed) const;
			Fixed operator*(Fixed fixed) const;
			Fixed operator/(Fixed fixed) const;
			
			//pre-increment/decrement operators
			Fixed &operator++();
			Fixed &operator--();

			//post-increment/decrement operators
			Fixed operator++(int);
			Fixed operator--(int);
			
		//public functions
			float	toFloat() const;
			int		toInt() const;
			static Fixed &min(Fixed &a, Fixed &b);
			static Fixed &max(Fixed &a, Fixed &b);
			static const Fixed &min(const Fixed &a, const Fixed &b);
			static const Fixed &max(const Fixed &a, const Fixed &b);

		//getter
			int		getRawBits(void) const;

		//setter
			void	setRawBits(int const raw);
};

//overload for ostream
std::ostream &operator<<(std::ostream &output, Fixed const &fixed);

#endif
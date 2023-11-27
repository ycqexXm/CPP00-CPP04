/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:43:58 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/16 16:11:12 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

/******************************************************************************
*								  Libraries									  *
******************************************************************************/
#include <iostream>
#include <cmath>
#include <fstream>

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
			Fixed(const Fixed &fixed);
			Fixed(int const int_number);
			Fixed(float const float_number);

			//destructor
			~Fixed();

			//overloaded operators
			Fixed &operator=(const Fixed  &fixed);

			//public member functions
			float	toFloat(void) const;
			int		toInt(void) const;

			//getter
			int		getRawBits(void) const;

			//setter
			void	setRawBits(int const raw);
};

//overload for ostream
std::ostream &operator<<(std::ostream &output, Fixed const &fixed);

#endif
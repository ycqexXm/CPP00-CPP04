/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:17:47 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/16 16:09:36 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

/******************************************************************************
*								  Libraries									  *
******************************************************************************/
#include <iostream>

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

			//destructor
			~Fixed();
			
			//overloaded operators
			Fixed &operator=(const Fixed &fixed);

			//getter
			int		getRawBits(void) const;

			//setter
			void	setRawBits(int const raw);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwolee <jiwolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:34:43 by jiwolee           #+#    #+#             */
/*   Updated: 2022/12/02 23:29:49 by jiwolee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

#include	<iostream>

class Fixed{
private:
	int	fixed_point;
	const static int fraction = 8;
public:
	Fixed( void );
	Fixed( Fixed const &origin );
	Fixed( int const num );
	Fixed( float const num );
	Fixed &operator=( Fixed const &origin);
	~Fixed( void );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream &operator<<( std::ostream &os, Fixed const &fixed );

#endif

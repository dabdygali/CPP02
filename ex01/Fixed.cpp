/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:12:47 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/18 15:11:52 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_fraction_len = FRACTION_LEN;

Fixed::Fixed( void )
{
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called" << std::endl;
	_value = num << _fraction_len;
}

Fixed::Fixed(float const num)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(num * (1 << _fraction_len));	
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_value = src.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

float	Fixed::toFloat( void ) const
{
	return static_cast<float> (_value) / static_cast<float> (1 << _fraction_len);
}

int		Fixed::toInt( void ) const
{
	return _value >> _fraction_len;
}

std::ostream &	operator<<(std::ostream & out, Fixed const & rhs)
{
	out << rhs.toFloat();
	return out;
}

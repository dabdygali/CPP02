/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:12:47 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/19 13:20:19 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_fraction_len = FRACTION_LEN;

Fixed::Fixed( void )
{
	//std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(Fixed const & src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const num)
{
	//std::cout << "Int constructor called" << std::endl;
	_value = num << _fraction_len;
}

Fixed::Fixed(float const num)
{
	//std::cout << "Float constructor called" << std::endl;
	_value = roundf(num * (1 << _fraction_len));	
}

Fixed::~Fixed( void )
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & src)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	_value = src.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
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

bool	Fixed::operator>(Fixed const & rhs) const
{
	return _value > rhs.getRawBits();
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return _value < rhs.getRawBits();	
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return _value >= rhs.getRawBits();
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return _value <= rhs.getRawBits();
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return _value == rhs.getRawBits();
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return _value != rhs.getRawBits();
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	Fixed	tmp;

	tmp.setRawBits(_value + rhs.getRawBits());
	return tmp;
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	Fixed	tmp;

	tmp.setRawBits(_value - rhs.getRawBits());
	return tmp;
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	Fixed	tmp(toFloat() * rhs.toFloat());
	
	return tmp;
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	Fixed	tmp(toFloat() / rhs.toFloat());
	
	return tmp;
}

Fixed &	Fixed::operator++( void )
{
	_value++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	_value++;
	return tmp;
}

Fixed & Fixed::operator--( void )
{
	_value--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;
	tmp = *this;
	_value--;
	return tmp;
}

Fixed &	Fixed::min(Fixed & a, Fixed & b)
{
	if (a > b)
		return b;
	return a;
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a > b)
		return b;
	return a;
}

Fixed &	Fixed::max(Fixed & a, Fixed & b)
{
	if (a < b)
		return b;
	return a;
}

Fixed const &	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a < b)
		return b;
	return a;
}

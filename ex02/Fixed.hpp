/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:35:11 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/19 13:49:35 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _FIXED_HPP_
	#define _FIXED_HPP_

	#define FRACTION_LEN 8
	#define FIXED_MAX 8388607.5f
	#define FIXED_MIN -8388608
	#include <iostream>
	class Fixed
	{
	private:
		int					_value;
		static const int	_fraction_len;
	public:
		Fixed( void );
		Fixed(Fixed const & src);
		Fixed(int const num);
		Fixed(float const num);
		~Fixed( void );
		Fixed & operator=(Fixed const & rhs);
		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;
		Fixed	operator+(Fixed const & rhs) const;
		Fixed	operator-(Fixed const & rhs) const;
		Fixed	operator*(Fixed const & rhs) const;
		Fixed	operator/(Fixed const & rhs) const;
		Fixed &	operator++( void );
		Fixed	operator++(int);
		Fixed & operator--( void );
		Fixed	operator--(int);
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static Fixed &			min(Fixed & a, Fixed & b);
		static Fixed const &	min(Fixed const & a, Fixed const & b);
		static Fixed &			max(Fixed & a, Fixed & b);
		static Fixed const &	max(Fixed const & a, Fixed const & b);
	};

	std::ostream &	operator<<(std::ostream & out, Fixed const & rhs);
#endif

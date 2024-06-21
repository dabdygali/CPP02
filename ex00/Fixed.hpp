/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:35:11 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/18 10:09:44 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _FIXED_HPP_
	#define _FIXED_HPP_

	#define FRACTION_LEN 8
	class Fixed
	{
	private:
		int					_value;
		static const int	_fraction_len;
	public:
		Fixed( void );
		Fixed(Fixed const & src);
		~Fixed( void );
		Fixed & operator=(Fixed const & rhs);
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
	};

#endif

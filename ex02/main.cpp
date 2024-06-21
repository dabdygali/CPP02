/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:54:57 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/19 13:22:15 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	/*//EXAMPLE FROM SUBJECT
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl; */

	Fixed	a(0.5f);
	Fixed	b(2.5f);
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl << std::endl;

	std::cout << "Testing the \">\" operator. Expected: FALSE" << std::endl;
	std::cout << (a > b) << std::endl << std::endl;

	std::cout << "Testing the \"<\" operator. Expected: TRUE" << std::endl;
	std::cout << (a < b) << std::endl << std::endl;

	std::cout << "Testing the \">=\" operator. Expected: FALSE" << std::endl;
	std::cout << (a >= b) << std::endl << std::endl;

	std::cout << "Testing the \"<=\" operator. Expected: TRUE" << std::endl;
	std::cout << (a <= b) << std::endl << std::endl;

	std::cout << "Testing the \"==\" operator. Expected: FALSE" << std::endl;
	std::cout << (a == b) << std::endl << std::endl;

	std::cout << "Testing the \"!=\" operator. Expected: TRUE" << std::endl;
	std::cout << (a != b) << std::endl << std::endl;

	std::cout << "Testing the \"+\" operator. Expected: a + b" << std::endl;
	std::cout << (a + b) << std::endl << std::endl;

	std::cout << "Testing the \"-\" operator. Expected: a - b" << std::endl;
	std::cout << (a - b) << std::endl << std::endl;

	std::cout << "Testing the \"*\" operator. Expected: a * b" << std::endl;
	std::cout << (a * b) << std::endl << std::endl;

	std::cout << "Testing the \"/\" operator. Expected: b / a" << std::endl;
	std::cout << (b / a) << std::endl << std::endl;

	std::cout << "Testing the \"++\"(pre-increment) operator. Change by ϵ such as 1 + ϵ > 1" << std::endl;
	std::cout << "Before:" << a << std::endl;
	std::cout << "In statement:" << ++a << std::endl;
	std::cout << "After:" << a << std::endl << std::endl;
	a = 0.5f;

	std::cout << "Testing the \"++\"(post-increment) operator. Change by ϵ such as 1 + ϵ > 1" << std::endl;
	std::cout << "Before:" << a << std::endl;
	std::cout << "In statement:" << a++ << std::endl;
	std::cout << "After:" << a << std::endl << std::endl;
	a = 0.5f;

	std::cout << "Testing the \"--\"(pre-decrement) operator. Change by ϵ such as 1 + ϵ > 1" << std::endl;
	std::cout << "Before:" << a << std::endl;
	std::cout << "In statement:" << --a << std::endl;
	std::cout << "After:" << a << std::endl << std::endl;
	a = 0.5f;

	std::cout << "Testing the \"--\"(post-decrement) operator. Change by ϵ such as 1 + ϵ > 1" << std::endl;
	std::cout << "Before:" << a << std::endl;
	std::cout << "In statement:" << a-- << std::endl;
	std::cout << "After:" << a << std::endl << std::endl;
	a = 0.5f;

	std::cout << "Testing the min(a, b) function. Result:" << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	std::cout << "Testing the max(a, b) function. Result:" << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	
	return 0;
}

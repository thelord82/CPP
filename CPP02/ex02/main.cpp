/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:04:49 by malord            #+#    #+#             */
/*   Updated: 2023/02/08 15:59:08 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( 5.05f );
	Fixed c( 2 );

	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;

	std::cout << "b + c = " << Fixed( b + c ) << std::endl;
	std::cout << "b - c = " << Fixed( b - c ) << std::endl;
	std::cout << "c - b = " << Fixed( c - b ) << std::endl;
	std::cout << "b * c = " << Fixed( b * c ) << std::endl;
	std::cout << "b / c = " << Fixed( b / c ) << std::endl;
	std::cout << "c / b = " << Fixed( c / b ) << std::endl;

	std::cout << "max(b, c) = " << Fixed::max(b, c) << std::endl;
	std::cout << "min(b, c) = " << Fixed::min(b, c) << std::endl;

	return 0;
}

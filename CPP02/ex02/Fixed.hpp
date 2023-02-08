/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:05:23 by malord            #+#    #+#             */
/*   Updated: 2023/02/08 14:34:55 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>
#include <cmath>

class Fixed {
	
private:
	int					_fixedNum;
	static int const	_raw = 8;
public:
	//Constructors
	Fixed(void);
	Fixed(Fixed const & src);
	Fixed(int const n);
	Fixed(float const f);
	
	//Destructor
	~Fixed(void);
	
	//Arithmetic and Assignment operators overload
	Fixed & operator=(Fixed const & rhs);
	Fixed operator+(Fixed const & rhs);
	Fixed operator-(Fixed const & rhs);
	Fixed operator*(Fixed const & rhs);
	Fixed operator/(Fixed const & rhs);

	//Comparison operators overload
	bool operator==(Fixed const &rhs);
	bool operator!=(Fixed const &rhs);
	bool operator<=(Fixed const &rhs);
	bool operator>=(Fixed const &rhs);
	bool operator<(Fixed const &rhs);
	bool operator>(Fixed const &rhs);

	//Increment operators overload
	Fixed & operator++(void);	//Pre increment
	Fixed & operator--(void);	//Pre increment
	Fixed operator++(int);		//Post increment
	Fixed operator--(int);		//Post increment

	//Getter function
	int		getRawBits(void) const;

	//Setters functions
	void	setRawBits(int const raw);
	float   toFloat(void) const;
	int     toInt(void) const;

	//Functions
	static Fixed & min(Fixed & fixed1, Fixed & fixed2);
	static Fixed const & min(Fixed const & fixed1, Fixed const & fixed2);
	static Fixed & max(Fixed & fixed1, Fixed & fixed2);
	static Fixed const & max(Fixed const & fixed1, Fixed const & fixed2);
};

std::ostream & operator<<(std::ostream & o, const Fixed & rhs);

#endif
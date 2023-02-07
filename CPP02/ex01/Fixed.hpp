/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:24:21 by malord            #+#    #+#             */
/*   Updated: 2023/02/07 13:35:39 by malord           ###   ########.fr       */
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
	
	//Operator overload
	Fixed & operator=(Fixed const & rhs);

	//Getter function
	int		getRawBits(void) const;

	//Setters functions
	void	setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, const Fixed & rhs);

#endif
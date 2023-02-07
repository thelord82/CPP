/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:14:39 by malord            #+#    #+#             */
/*   Updated: 2023/02/07 10:46:53 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>
class Fixed
{
private:
	int					_fixedNum;
	static int const	_raw = 8;
public:
	Fixed(void);
	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & rhs);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
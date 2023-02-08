/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:24:23 by malord            #+#    #+#             */
/*   Updated: 2023/02/08 11:00:53 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedNum(0) { 
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(int const n) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixedNum = (n << _raw);
}

Fixed::Fixed(float const f) {
    std::cout << "Float constructor called" << std::endl;
    this->_fixedNum = int(roundf(f * (1 << _raw)));
}

Fixed & Fixed::operator=(Fixed const & rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedNum = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    //std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedNum;
}

void Fixed::setRawBits(int const raw) { 
    this->_fixedNum = raw;
}

float Fixed::toFloat(void) const {
    return float(this->_fixedNum) / (1 << _raw);
}

int Fixed::toInt(void) const {
    return (this->_fixedNum >> _raw);
}

std::ostream & operator<<(std::ostream & o, const Fixed & rhs) {
    o << rhs.toFloat();
    return (o);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:05:34 by malord            #+#    #+#             */
/*   Updated: 2023/02/09 14:57:31 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/******************************************************************************/
/*                                                                            */
/*                        CONSTRUCTORS / DESTRCUTORS                          */
/*                                                                            */
/******************************************************************************/

Fixed::Fixed(void) : _fixedNum(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(int const n)
{
    // std::cout << "Int constructor called" << std::endl;
    this->_fixedNum = (n << _raw);
}

Fixed::Fixed(float const f)
{
    // std::cout << "Float constructor called" << std::endl;
    this->_fixedNum = int(roundf(f * (1 << _raw)));
}

/******************************************************************************/
/*                                                                            */
/*              ARITHMETIC AND ASSIGNMENT OPERATORS OVERLOAD                  */
/*                                                                            */
/******************************************************************************/

Fixed &Fixed::operator=(Fixed const &rhs)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedNum = rhs.getRawBits();
    return *this;
}

Fixed Fixed::operator+(Fixed const &rhs)
{
    // std::cout << "Addition operator called with " << this->_fixedNum;
    // std::cout << " and " << rhs.getRawBits() << std::endl;
    Fixed result(this->toFloat() + rhs.toFloat());
    return (result);
}

Fixed Fixed::operator-(Fixed const &rhs)
{
    // std::cout << "Substraction operator called with " << this->_fixedNum;
    // std::cout << " and " << rhs.getRawBits() << std::endl;
    Fixed result(this->toFloat() - rhs.toFloat());
    return (result);
}

Fixed Fixed::operator*(Fixed const &rhs)
{
    // std::cout << "Multiplication operator called with " << this->_fixedNum;
    // std::cout << " and " << rhs.getRawBits() << std::endl;
    Fixed result(this->toFloat() * rhs.toFloat());
    return (result);
}

Fixed Fixed::operator/(Fixed const &rhs)
{
    // std::cout << "Division operator called with " << this->_fixedNum;
    // std::cout << " and " << rhs.getRawBits() << std::endl;
    Fixed result(this->toFloat() / rhs.toFloat());
    return (result);
}

/******************************************************************************/
/*                                                                            */
/*                        COMPARISON OPERATORS OVERLOAD                       */
/*                                                                            */
/******************************************************************************/

bool Fixed::operator==(Fixed const &rhs)
{
    return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs)
{
    return (this->getRawBits() != rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs)
{
    return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs)
{
    return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs)
{
    return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>(Fixed const &rhs)
{
    return (this->getRawBits() > rhs.getRawBits());
}

/******************************************************************************/
/*                                                                            */
/*                        INCREMENT OPERATORS OVERLOAD                        */
/*                                                                            */
/******************************************************************************/

Fixed &Fixed::operator++(void)
{
    this->_fixedNum++;
    return (*this);
}

Fixed &Fixed::operator--(void)
{
    this->_fixedNum--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++(*this);
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    --(*this);
    return (tmp);
}

/******************************************************************************/
/*                                                                            */
/*                                  FUNCTIONS                                 */
/*                                                                            */
/******************************************************************************/

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedNum;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedNum = raw;
}

float Fixed::toFloat(void) const
{
    return float(this->_fixedNum) / (1 << _raw);
}

int Fixed::toInt(void) const
{
    return (this->_fixedNum >> _raw);
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
    return ((fixed1 < fixed2) ? fixed1 : fixed2);
}

Fixed const &Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
    return ((fixed1._fixedNum < fixed2._fixedNum) ? fixed1 : fixed2);
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
    return ((fixed1 > fixed2) ? fixed1 : fixed2);
}

Fixed const &Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
    return ((fixed1._fixedNum > fixed2._fixedNum) ? fixed1 : fixed2);
}

std::ostream &operator<<(std::ostream &o, const Fixed &rhs)
{
    o << rhs.toFloat();
    return (o);
}
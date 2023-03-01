/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:55:13 by malord            #+#    #+#             */
/*   Updated: 2023/03/01 09:11:01 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void)
{
    //std::cout << "Base destructor called" << std::endl;
}

Base *generate(void)
{
    srand(time(NULL));
    switch (rand() % 3)
    {
    case 0:
        return new A;
        break;
    case 1:
        return new B;
        break;
    case 2:
        return new C;
        break;
    }
    return (NULL);
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "Type A Object (pointer)" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "Type B object (pointer)" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "Type C object (pointer)" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &refA = dynamic_cast<A &>(p);
        std::cout << "Type A object (reference)" << std::endl;
    }
    catch (std::bad_cast &bc) {}
    try
    {
        B &refB = dynamic_cast<B &>(p);
        std::cout << "Type B object (reference)" << std::endl;
    }
    catch (std::bad_cast &bc) {}
    try
    {
        C &refC = dynamic_cast<C &>(p);
        std::cout << "Type C object (reference)" << std::endl;
    }
    catch (std::bad_cast &bc) {}
}
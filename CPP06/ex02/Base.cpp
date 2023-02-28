/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:55:13 by malord            #+#    #+#             */
/*   Updated: 2023/02/28 15:07:07 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void)
{
    std::cout << "Base destructor called" << std::endl;
}

Base *generate(void)
{
    srand(time(NULL));
    int result = rand() % 3;
    Base instanceBase;
    switch (result)
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
    A *instanceA = dynamic_cast<A *>(p);
    if (instanceA)
    {
        std::cout << "This is an object of type A" << std::endl;
        return;
    }
    B* instanceB = dynamic_cast<B *>(p);
    if (instanceB)
    {
        std::cout << "This is an object of type B" << std::endl;
        return;
    }
    C* instanceC = dynamic_cast<C *>(p);
    if (instanceC)
    {
        std::cout << "This is an object of type C" << std::endl;
        return;
    }
}

void identify(Base &p)
{   
    try
    {
        A &refA = dynamic_cast<A &>(p);
        std::cout << "This is an object of type A" << std::endl;
        return;
    }
    catch (std::bad_cast &bc)
    {
        std::cout << "This is not an object of type A " << bc.what() << std::endl;
    }
    try
    {
        B &refB = dynamic_cast<B &>(p);
        std::cout << "This is an object of type B" << std::endl;
        return;
    }
    catch(std::bad_cast &bc)
    {
        std::cout << "This is not an object of type B " << bc.what() << std::endl;
    }
    try
    {
        C &refC = dynamic_cast<C &>(p);
        std::cout << "This is an object of type C" << std::endl;
        return;
    }
    catch(std::bad_cast &bc)
    {
        std::cout << "This is not an object of type C " << bc.what() << std::endl;
    }
}
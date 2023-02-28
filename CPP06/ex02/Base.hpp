/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:55:11 by malord            #+#    #+#             */
/*   Updated: 2023/02/28 14:02:20 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP_
#define BASE_HPP_

#include <iostream>
#include <string>

class Base
{

  public:
    virtual ~Base();
};

class A : public Base
{
};
class B : public Base
{
};
class C : public Base
{
};

#endif
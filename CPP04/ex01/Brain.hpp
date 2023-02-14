/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:54:33 by malord            #+#    #+#             */
/*   Updated: 2023/02/14 10:20:16 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_
#include <iostream>
#include <string>

class Brain
{
  private:
    /* data */
  public:
    Brain();
    Brain(Brain const &copy);
    Brain &operator=(Brain const &rhs);
    ~Brain();

    std::string ideas[100];
};

#endif
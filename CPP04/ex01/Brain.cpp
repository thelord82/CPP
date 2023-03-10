/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:54:35 by malord            #+#    #+#             */
/*   Updated: 2023/02/15 15:14:04 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
    *this = copy;
}

Brain &Brain::operator=(Brain const &rhs)
{
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = rhs.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int index) const
{
    return (this->ideas[index]);
}

void Brain::setIdea(std::string idea, int index)
{
    this->ideas[index] = idea;
}
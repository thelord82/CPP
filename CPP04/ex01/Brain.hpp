/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:54:33 by malord            #+#    #+#             */
/*   Updated: 2023/02/15 10:13:17 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_
#include <iostream>
#include <string>

class Brain
{
  private:
    std::string ideas[100];

  public:
    Brain();
    Brain(Brain const &copy);
    Brain &operator=(Brain const &rhs);
    ~Brain();

    std::string getIdea(int index) const;
    void setIdea(std::string idea, int index);
};

#endif
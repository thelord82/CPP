/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:01:20 by malord            #+#    #+#             */
/*   Updated: 2023/02/22 09:27:02 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP_
#define INTERN_HPP_

#include "Form.hpp"
#include <iostream>
#include <string>
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
  public:
    Intern(void);
    Intern(Intern const &copy);
    Intern &operator=(Intern const &rhs);
    virtual ~Intern(void);

    AForm *makeForm(std::string formName, std::string target);
};

#endif
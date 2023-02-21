/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:28:37 by malord            #+#    #+#             */
/*   Updated: 2023/02/21 09:30:15 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP_
#define SHRUBERRYCREATIONFORM_HPP_

#include "Form.hpp"

class ShruberryCreationForm : public AForm
{
  private:
    const int _gradeToSign    = 145;
    const int _gradeToExecute = 137;

  public:
    ShruberryCreationForm(void);
    ShruberryCreationForm(std::string target);
    ShruberryCreationForm(ShruberryCreationForm const &copy);
    ShruberryCreationForm &operator=(ShruberryCreationForm const &rhs);
    virtual ~ShruberryCreationForm(void);
};
#endif
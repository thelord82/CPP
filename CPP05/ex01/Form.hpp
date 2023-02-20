/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:18:43 by malord            #+#    #+#             */
/*   Updated: 2023/02/20 13:32:17 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_
#include "Bureaucrat.hpp"
#include "Exception.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
  private:
    const std::string _name;
    bool              _isSigned;
    const int         _gradeToSign;
    const int         _gradeToExecute;

  public:
    Form(void);
    Form(std::string name, int gradeToSign, int gradeToExecute);
    Form(Form const &copy);
    Form &operator=(Form const &rhs);
    virtual ~Form();

    std::string getName(void) const;
    bool getSignedStatus(void) const;
    int getGradeToSign(void) const;
    int getGradeToExecute(void) const;
    void beSigned(Bureaucrat &powerfulDude);
};
std::ostream &operator<<(std::ostream &o, const Form &rhs);

#endif
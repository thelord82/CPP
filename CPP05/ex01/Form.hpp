/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:18:43 by malord            #+#    #+#             */
/*   Updated: 2023/02/20 09:43:59 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_
#include "Bureaucrat.hpp"
#include "Exception.hpp"
#include <iostream>
#include <string>

class Form : public MyException
{
  private:
    const std::string _name;
    bool              _isSigned;
    const int         _gradeToSign;
    const int         _gradeToExecute;

  public:
    Form(std::string name, int gradeToSign, int gradeToExecute);
    Form(Form const &copy);
    Form &operator=(Form const &rhs);
    virtual ~Form();

    const std::string getName(void) const;
    bool getSignedStatus(void) const;
    const int getGradeToSign(void) const;
    const int getGradeToExecute(void) const;
    void beSigned(Bureaucrat &powerfulDude);
};
std::ostream &operator<<(std::ostream &o, const Form &rhs);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:18:43 by malord            #+#    #+#             */
/*   Updated: 2023/02/21 15:38:21 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_
#include "Bureaucrat.hpp"
#include "Exception.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
  private:
    const std::string _name;
    bool              _isSigned;
    const int         _gradeToSign;
    const int         _gradeToExecute;

  public:
    AForm(void);
    AForm(std::string name, int gradeToSign, int gradeToExecute);
    AForm(AForm const &copy);
    AForm &operator=(AForm const &rhs);
    virtual ~AForm();

    virtual std::string getName(void) const;
    bool                getSignedStatus(void) const;
    virtual int         getGradeToSign(void) const;
    virtual int         getGradeToExecute(void) const;
    virtual bool        execute(Bureaucrat const &executor) const = 0;
    void                beSigned(Bureaucrat &powerfulDude);
};
std::ostream &operator<<(std::ostream &o, const AForm &rhs);

#endif
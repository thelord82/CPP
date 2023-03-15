/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:24:29 by malord            #+#    #+#             */
/*   Updated: 2023/03/15 10:06:15 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_
#include "Exception.hpp"
#include "Form.hpp"
#include <iostream>
#include <stdexcept>
#include <string>

class Form;
class Bureaucrat
{
  private:
    const std::string _name;
    int               _grade;

  public:
    Bureaucrat(void);
    Bureaucrat(int grade, std::string name);
    Bureaucrat(Bureaucrat const &copy);
    Bureaucrat &operator=(Bureaucrat const &rhs);
    virtual ~Bureaucrat(void);
    std::string getName(void) const;
    int         getGrade(void) const;
    void        setGradeUp(void);
    void        setGradeDown(void);
    void        signForm(Form &form);
};
std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif
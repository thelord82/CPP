/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:24:29 by malord            #+#    #+#             */
/*   Updated: 2023/02/20 10:57:45 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_
#include <iostream>
#include <stdexcept>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
  private:
    std::string _name;
    int         _grade;

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
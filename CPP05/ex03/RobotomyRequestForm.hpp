/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:28:31 by malord            #+#    #+#             */
/*   Updated: 2023/02/21 15:25:44 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP_
#define ROBOTOMYREQUESTFORM_HPP_

#include "Form.hpp"

class RobotomyRequestForm : public AForm
{
  private:
    std::string  _target;
    virtual bool execute(Bureaucrat const &executor) const;

  public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &copy);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
    virtual ~RobotomyRequestForm(void);
};

#endif
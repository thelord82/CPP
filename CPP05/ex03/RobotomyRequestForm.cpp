/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:28:28 by malord            #+#    #+#             */
/*   Updated: 2023/02/21 14:47:52 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
    std::cout << "Robotomy constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45), _target(target)
{
    std::cout << "Robotomy parameter constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy)
{
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    this->_target = rhs._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "Robotomy destructor called." << std::endl;
}

bool RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if (executor.getGrade() > this->getGradeToExecute())
            throw MyException::GradeTooLowException();
        else if (this->getSignedStatus() == false)
            throw MyException::FormNotSignedException();
        else
        {
            std::cout << "DzzZZzzDzZzZZZzZ DZZzzzZzZzZZzZz *drill noises*" << std::endl;
            srand(time(NULL));
            int result = rand() % 2;
            if (result == 1)
                std::cout << this->_target << " has been robotomized successfully." << std::endl;
            else
                std::cout << "Robotomy attempted but failed." << std::endl;
            return (true);
        }
    }
    catch (MyException::GradeTooLowException &e)
    {
        std::cerr << "Error: " << executor.getName() << " couldn't execute " << this->_target << " because " << e.what()
                  << std::endl;
        return (false);
    }
    catch (MyException::FormNotSignedException &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return (false);
    }
}
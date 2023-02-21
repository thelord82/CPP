/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:28:37 by malord            #+#    #+#             */
/*   Updated: 2023/02/21 15:25:53 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP_
#define SHRUBBERYCREATIONFORM_HPP_

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
  private:
    std::string _target;
    virtual bool execute(Bureaucrat const &executor) const;

  public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const &copy);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
    virtual ~ShrubberyCreationForm(void);

    virtual std::string getTarget(void) const;
};
#endif
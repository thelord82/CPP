/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:28:25 by malord            #+#    #+#             */
/*   Updated: 2023/02/20 15:17:23 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP_
#define PRESIDENTIALPARDONFORM_HPP_
#include "Form.hpp"

class PresidentialPardonForm : public AForm
{
  public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &copy);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
    virtual ~PresidentialPardonForm(void);
};

#endif
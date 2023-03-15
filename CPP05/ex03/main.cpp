/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:24:27 by malord            #+#    #+#             */
/*   Updated: 2023/03/15 11:44:21 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
    try
    {
        AForm *robNewForm;
        Intern stagiaire;
        robNewForm = stagiaire.makeForm("robotomy request", "Clepetar");
        delete robNewForm;
        std::cout << std::endl;
        
        AForm *shrubNewForm;
        shrubNewForm = stagiaire.makeForm("shrubbery creation", "Albert le jardinier");
        delete shrubNewForm;
        std::cout << std::endl;
    
        AForm *presNewForm;
        presNewForm = stagiaire.makeForm("presidential pardon", "Joe");
        delete presNewForm;
        std::cout << std::endl;
    
        AForm *badNewForm;
        badNewForm = stagiaire.makeForm("cuillere de bois", "folle");
        // No need to delete here because the form wasn't created.
    }
    catch (MyException::FormNotFoundException &fnf)
    {
        std::cerr << fnf.what() << std::endl;
    }
}
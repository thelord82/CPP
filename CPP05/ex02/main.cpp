/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:24:27 by malord            #+#    #+#             */
/*   Updated: 2023/03/15 11:22:10 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    // Bureaucrat won't be able to sign nor execute that form
    try
    {
        Bureaucrat bur1(92, "Fabien");
        PresidentialPardonForm form1("Donald");
        bur1.signForm(form1);
        //bur1.executeForm(form1);
    
        // Here we up the Bureaucrat grade until he's good enough to sign and execute the form
        //while (bur1.getGrade() > form1.getGradeToExecute())
        //    bur1.setGradeUp();
    
        // Magic ! He can do it now !
        //bur1.signForm(form1);
        //bur1.executeForm(form1);
        //
        //
        // Again, this schmuck can't do shit
        //Bureaucrat bur2(149, "Ti-Pet");
        ShrubberyCreationForm form2("Marthe Laverdiere");
        //bur2.signForm(form2);
        //bur2.executeForm(form2);
    //
        //// Upping the grade until he can sign it ONLY
        //while (bur2.getGrade() > form2.getGradeToSign())
        //    bur2.setGradeUp();
        //bur2.signForm(form2);   // WORKS!
        //bur2.executeForm(form2);    // Throws exception
        //
        //// Now he'll get powerful enough
        //while (bur2.getGrade() > form2.getGradeToExecute())
        //    bur2.setGradeUp();
        //bur2.executeForm(form2); //WORKS ! No need to recall sign function, it is already signed
    //
        //// Now we bring that pretentious bureaucrat DOWN so he can't execute it anymore
        //while (bur2.getGrade() <= form2.getGradeToSign())
        //    bur2.setGradeDown();
        //bur2.executeForm(form2); // We can't unsign the form, but he won't be able to execute it anymore
    //
        // With its current settings, this guy can sign and execute Robotomy and Shrubbery, but not Presidential Pardon
        Bureaucrat bur3(45, "Gros gaillard");
        RobotomyRequestForm form3("Farfadaa");
        bur3.signForm(form3);
        bur3.executeForm(form3); // WORKS
        bur3.signForm(form2);    // WORKS   
        bur3.executeForm(form2); // WORKS
        bur3.executeForm(form1); // Won't work. At this point, everything is signed so signForm isn't called.
    }
    catch (MyException::GradeTooLowException &gtl)
    {
        std::cerr << gtl.what() << std::endl;
    }
    catch (MyException::GradeTooHighException &gth)
    {
        std::cerr << gth.what() << std::endl;
    }
    catch (MyException::ExecutionFailedException &ef)
    {
        std::cerr << ef.what() << std::endl;
    }
    catch (MyException::FormNotSignedException &fns)
    {
        std::cerr << fns.what() << std::endl;
    }
}
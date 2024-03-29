/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:24:27 by malord            #+#    #+#             */
/*   Updated: 2023/03/15 10:14:42 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        // Valid instances
        Bureaucrat bur1(150, "Gontran");
        Bureaucrat bur2(1, "Chestnut");
        Form       form1("A-38", 50, 49);
    
        // Error handling of necessary grades for forms
        std::cout << "-----------------" << std::endl;
        //Form badForm1("bad one", 151, 5);
        //Form badForm2("bad two", 45, 151);
        //Form badForm3("bad three", 0, 100);
        //Form badForm4("bad four", 44, 0);
    
        // Error handling of grades for bureaucrats (from previous exercise)
        //Bureaucrat badBur1(151, "Martine St-Clair");
        //Bureaucrat badBur2(0, "Jean Leloup");
    
        std::cout << "-----------------" << std::endl;
    
        // Shows that a bureaucrat with a too low grad won't affect the signed status
        //std::cout << form1 << std::endl << std::endl;
        //bur1.signForm(form1);
        //form1.beSigned(bur1);
        //std::cout << std::endl;
        //std::cout << form1 << std::endl;
        //std::cout << "-----------------" << std::endl;
    
        // Then we sign it with a qualified bureaucrat
        std::cout << form1 << std::endl;
        bur2.signForm(form1);
        form1.beSigned(bur2);
        std::cout << form1 << std::endl;
        std::cout << "-----------------" << std::endl;
    }
    catch (MyException::GradeTooHighException &gth)
    {
        std::cerr << gth.what() << std::endl;
    }
    catch (MyException::GradeTooLowException &gtl)
    {
        std::cerr << gtl.what() << std::endl;
    }
    return (0);
}
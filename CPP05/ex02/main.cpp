/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:24:27 by malord            #+#    #+#             */
/*   Updated: 2023/02/20 13:38:33 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    // Valid instances
    Bureaucrat bur1(150, "Gontran");
    Bureaucrat bur2(1, "Chestnut");
    AForm       form1("A-38", 50, 49);

    // Error handling of necessary grades for forms
    std::cout << "-----------------" << std::endl;
    AForm badForm1("bad one", 151, 5);
    AForm badForm2("bad two", 45, 151);
    AForm badForm3("bad three", 0, 100);
    AForm badForm4("bad four", 44, 0);

    // Error handling of grades for bureaucrats (from previous exercise)
    Bureaucrat badBur1(151, "Martine St-Clair");
    Bureaucrat badBur2(0, "Jean Leloup");

    std::cout << "-----------------" << std::endl;

    // Shows that a bureaucrat with a too low grad won't affect the signed status
    std::cout << form1 << std::endl << std::endl;
    bur1.signForm(form1);
    form1.beSigned(bur1);
    std::cout << std::endl;
    std::cout << form1 << std::endl;
    std::cout << "-----------------" << std::endl;

    // Then we sign it with a qualified bureaucrat
    bur2.signForm(form1);
    form1.beSigned(bur2);
    std::cout << form1 << std::endl;
    std::cout << "-----------------" << std::endl;
    return (0);
}
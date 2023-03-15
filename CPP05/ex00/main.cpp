/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:24:27 by malord            #+#    #+#             */
/*   Updated: 2023/03/15 09:48:20 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat test(1, "Gontran");
        Bureaucrat test2(150, "Gaetan");
        //Bureaucrat test3(300, "PasBon"); // Throws exception
        //Bureaucrat test4(-2, "TropBon"); // Throws exception
        //test.setGradeUp(); // Throws exception
        //test2.setGradeDown(); // Throws exception
        Bureaucrat test5(test);
        Bureaucrat test6(4, "NameWontChangeButGradeYesWithEqual");
        std::cout << "------------------------" << std::endl;
        std::cout << "HERE COMES THOSE PRINTS!" << std::endl;
        std::cout << "------------------------" << std::endl;
        std::cout << test << std::endl;
        std::cout << test2 << std::endl;
        std::cout << test5 << std::endl;
        std::cout << test6 << std::endl;
        test6 = test;
        std::cout << test6 << std::endl;
        test6.setGradeDown();
        std::cout << test6 << std::endl;
        test6.setGradeUp();
        std::cout << test6 << std::endl;
        std::cout << "------------------------" << std::endl;
    }
    catch(MyException::GradeTooHighException &gth)
    {
        std::cerr << gth.what() << std::endl;
    }
    catch(MyException::GradeTooLowException &gtl)
    {
        std::cerr << gtl.what() << std::endl;
    }
}
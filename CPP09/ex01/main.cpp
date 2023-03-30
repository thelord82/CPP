/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:05 by malord            #+#    #+#             */
/*   Updated: 2023/03/30 12:06:03 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
int main(int argc, char **argv)
{
    (void)argc;
    RPN test;
    try
    {
        if (argc != 2)
            throw MyException::NoQuotesException();
        test.fillStack(argv[1]);
        test.printRPN();
    }
    catch (MyException::NoQuotesException &nqe)
    {
        std::cerr << nqe.what() << std::endl;
    }
    catch (MyException::WrongInputException &wie)
    {
        std::cerr << wie.what() << std::endl;
    }
    catch (MyException::HigherNumberException &hne)
    {
        std::cerr << hne.what() << std::endl;
    }
    catch (MyException::InputErrorException &iee)
    {
        std::cerr << iee.what() << std::endl;
    }
    return (0);
}
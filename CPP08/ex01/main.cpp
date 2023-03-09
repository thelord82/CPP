/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:21:58 by malord            #+#    #+#             */
/*   Updated: 2023/03/09 14:31:11 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    // First test, simple Span object with vector filled with addNumber function
    std::cout << "------------------" << std::endl;
    std::cout << "EASY TEST" << std::endl;
    std::cout << "------------------" << std::endl;
    Span easy(5);
    try
    {
        easy.addNumber(2);
        easy.addNumber(4);
        easy.addNumber(6);
        easy.addNumber(8);
        easy.addNumber(69);
        for (int i = 0; i < easy.getSize(); ++i)
            std::cout << "Value = " << easy.getValue(i) << std::endl;
        std::cout << "Longest span = " << easy.longestSpan() << std::endl;
        std::cout << "Shortest span = " << easy.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error with insertions" << std::endl;
    }

    // Test with more calls to addNumber than size of the Span object
    std::cout << "------------------" << std::endl;
    std::cout << "EASY FAILING TEST" << std::endl;
    std::cout << "------------------" << std::endl;
    try
    {
        Span failing(2);
        failing.addNumber(10);
        failing.addNumber(20);
        failing.addNumber(30);
    }
    catch(const MyException::GreaterThanSize &gts)
    {
        std::cerr << gts.what() << std::endl;
    }
    
    // Test that fails the longest and shortest span functions
    std::cout << "------------------" << std::endl;
    std::cout << "SPAN FAILING TEST" << std::endl;
    std::cout << "------------------" << std::endl;
    try
    {
        Span tooSmall(1);
        tooSmall.addNumber(10);
        int span = tooSmall.longestSpan();
        std::cout << "Longest span = " << span << std::endl;
    }
    catch (MyException::NotEnoughElements &nee)
    {
        std::cerr << nee.what() << std::endl;
    }
    
    // Test that fills the vector without multiple calls to addNumber
    // PLEASE REMOVE THE PRINT OF VALUE IF TESTED WITH 10000+ ELEMENTS FOR GOD'S SAKE!
    std::cout << "------------------" << std::endl;
    std::cout << "FILLVECTOR FUNCTION TEST" << std::endl;
    std::cout << "------------------" << std::endl;
    try
    {
        Span toFill(10);
        toFill.fillVector();
        for (int i = 0; i < toFill.getSize(); ++i)
            std::cout << "Value = " << toFill.getValue(i) << std::endl;
        std::cout << "Longest span = " << toFill.longestSpan() << std::endl;
        std::cout << "Shortest span = " << toFill.shortestSpan() << std::endl;
    }
    catch(const MyException::NotEnoughElements &nee)
    {
        std::cerr << nee.what() << std::endl;
    }

    // Test that fail longest and shortest span functions but with fillVector
    std::cout << "------------------" << std::endl;
    std::cout << "FAILED SPAN WITH FILLVECTOR" << std::endl;
    std::cout << "------------------" << std::endl;
    try
    {
        Span toFill(1);
        toFill.fillVector();
        for (int i = 0; i < toFill.getSize(); ++i)
            std::cout << "Value = " << toFill.getValue(i) << std::endl;
        std::cout << "Longest span = " << toFill.longestSpan() << std::endl;
        std::cout << "Shortest span = " << toFill.shortestSpan() << std::endl;
    }
    catch(const MyException::NotEnoughElements &nee)
    {
        std::cerr << nee.what() << std::endl;
    }
    
    return 0;
}
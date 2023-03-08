/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:21:58 by malord            #+#    #+#             */
/*   Updated: 2023/03/08 14:47:55 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{   
    Span spanTest(5);
    try
    {
        spanTest.addNumber(6);
        spanTest.addNumber(3);
        spanTest.addNumber(17);
        spanTest.addNumber(9);
        spanTest.addNumber(11);
        for (int i = 0; i < spanTest.getSize(); ++i)
            std::cout << "valeur = " << spanTest.getValue(i) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "You can't add more elements than the size" << std::endl;
        return (0);
    }
    try
    {
        std::cout << "Longest span = " << spanTest.longestSpan() << std::endl;
        std::cout << "Shortest span = " << spanTest.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Span must be at least of size 2 to calculate a span" << std::endl;
    }
    

    // TEST MAIN FROM THE SUBJECT

    // Span sp = Span(5);
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
    return 0;
}
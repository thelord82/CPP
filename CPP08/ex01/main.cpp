/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:21:58 by malord            #+#    #+#             */
/*   Updated: 2023/03/08 12:01:08 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span    spanTest(3);

    for (int i = 0; i < 3; ++i)
        std::cout << spanTest.getValue(i) << std::endl;
    
    
    
    // TEST MAIN FROM THE SUBJECT
    
    //Span sp = Span(5);
    //sp.addNumber(6);
    //sp.addNumber(3);
    //sp.addNumber(17);
    //sp.addNumber(9);
    //sp.addNumber(11);
    //std::cout << sp.shortestSpan() << std::endl;
    //std::cout << sp.longestSpan() << std::endl;
    return 0;
}
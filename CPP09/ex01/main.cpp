/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:05 by malord            #+#    #+#             */
/*   Updated: 2023/03/24 10:37:32 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
int main(int argc, char **argv)
{
    (void) argc;
    RPN test;
    try
    {
        if (argc != 2)
            throw std::exception();
        test.fillStack(argv[1]);

    }
    catch (std::exception &e)
    {
        std::cerr << "You must input one reverse polish notation between double quotes" << std::endl;
    }
    return (0);
}
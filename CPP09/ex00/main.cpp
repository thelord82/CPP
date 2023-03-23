/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:17:17 by malord            #+#    #+#             */
/*   Updated: 2023/03/23 17:14:57 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    try
    {
        if (argc == 2)
        {
            Data instance;
            instance.fillDatabase();
            instance.fillInput(argv[1]);
            instance.printBTC();
        }
        else
            std::cout << "Please enter a valid file" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "File does not exist" << std::endl;
    }
    return (0);
}
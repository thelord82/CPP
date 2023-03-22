/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:17:17 by malord            #+#    #+#             */
/*   Updated: 2023/03/22 13:29:17 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    //TODO incorporer la validation des dates et valeurs avec le lexico_compare
    try
    {
        if (argc == 2)
        {
            Data instance;
            instance.fillDatabase();
            instance.fillInput(argv[1]);
            instance.validateDate("2021-02-29");
            //if (!instance.validateDate("1710-22-20"))
            //    std::cout << "Mauvaise date" << std::endl;
            //else
            //    std::cout << "Date acceptee" << std::endl;
            //instance.printBTC();
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
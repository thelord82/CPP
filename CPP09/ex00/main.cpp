/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:17:17 by malord            #+#    #+#             */
/*   Updated: 2023/03/20 14:31:16 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    (void)argc;
    // THIS is the date handling function
    // std::string date_str = "2022-12-33";
    // std::tm     date     = {};
    //
    // std::istringstream ss(date_str);
    // ss >> std::get_time(&date, "%Y-%m-%d");
    //
    // if (ss.fail())
    //{
    //    std::cout << "Error: Invalid date string\n";
    //    return (1);
    //}
    //
    // std::cout << "Date: " << std::put_time(&date, "%Y-%m-%d") << "\n";
    // TODO Transfer the logic into classes
    try 
    {
         if (argc == 2)
        {
            Data instance;
            instance.fillDatabase();
            instance.fillInput(argv[1]);
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
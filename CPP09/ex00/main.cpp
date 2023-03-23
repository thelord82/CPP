/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:17:17 by malord            #+#    #+#             */
/*   Updated: 2023/03/23 11:41:52 by malord           ###   ########.fr       */
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

    //float test1 = 47115.93;
    //float test2 = 3;
    //std::cout << "result = " << test1 * test2 << std::endl;

    std::cout << "-------------" << std::endl;
    //std::tm tm = {};  // zero initialise
    //tm.tm_year = 2020-1900; // 2020
    //tm.tm_mon = 2-1; // February
    //tm.tm_mday = 15; // 15th
    //tm.tm_hour = 10;
    //tm.tm_min = 15;
    //tm.tm_isdst = 0; // Not daylight saving
    //std::time_t t = std::mktime(&tm); 
    //std::tm local = *std::localtime(&t);
 //
    //std::cout << "local: " << std::put_time(&local, "%c %Z") << '\n';

    // Get the current time
    std::time_t currentTime = std::time(0);

  // Convert the current time to a string form
    std::string dateString = std::ctime(&currentTime);
    std::istringstream ss(dateString);


  // Output the current time
    std::cout << "The current date and time is: " << dateString << std::endl;
    return (0);
}
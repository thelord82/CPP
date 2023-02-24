/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:08:41 by malord            #+#    #+#             */
/*   Updated: 2023/02/24 11:06:11 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

void getType(std::string arg)
{
    
}

void charConversion(std::string arg)
{
    char converted;
    try
    {
        converted = static_cast<char>(std::atof(arg.c_str()));
        if (!isprint(converted))
            throw std::exception();
        else
            std::cout << "char: " << converted << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "char: non displayable" << std::endl;
    }
    
}

void intConversion(std::string arg)
{
    int converted;
    try
    {
        converted = static_cast<int>(std::atof(arg.c_str()));
        if (!converted)
            throw std::exception();
        else
            std::cout << "int: " << converted << std::endl;
            
    }
    catch(const std::exception& e)
    {
        std::cerr << "int: impossible" << std::endl;
    }
    
}

int main()
{
    std::string str = "allo";
    //double d = std::stod(str);
    //std::cout << "test1: " << d << std::endl;
    //std::cout << "test2: " << std::fixed << std::setprecision(1) << d << std::endl;
    charConversion(str);
    intConversion(str);
    //double convDouble = static_cast<double>(std::atof(str.c_str()));
    //float convFloat = static_cast<float>(std::atof(str.c_str()));
    //char convChar = static_cast<char>(std::atof(str.c_str()));
    //char convChar = charConversion(str);
    //std::cout << "The char value of \"" << str << "\" is " << convChar << std::endl;
    //int convInt = static_cast<int>(std::atof(str.c_str()));
    //std::cout << "The double value of \"" << str << "\" is " << convDouble << std::endl;
    //std::cout << "The float value of \"" << str << "\" is " << convFloat << std::endl;
    //std::cout << "The int value of \"" << str << "\" is " << convInt << std::endl;
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:08:41 by malord            #+#    #+#             */
/*   Updated: 2023/02/27 14:40:58 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>
#include <typeinfo>
#include "Conversion.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Conversion instance;
        instance.convertLiteral(argv[1]);
        
    }
    //if (argc == 2)
    //{
    //    charConversion(argv[1]);
    //    intConversion(argv[1]);
    //    floatConversion(argv[1]);
    //    doubleConversion(argv[1]);
//
    //    std::cout << "test: " << getType(argv[1]) << std::endl;
    //}
    // std::cout << std::boolalpha;
    // std::cout << "is_literal_type:" << std::endl;
    // std::cout << "char " << std::is_literal_type<char>::value << std::endl;
    // std::cout << "int: " << std::is_literal_type<int>::value << std::endl;
    // std::cout << "float: " << std::is_literal_type<float>::value << std::endl;
    // std::cout << "double: " << std::is_literal_type<double>::value << std::endl;
    return 0;
}

// int main(int argc, char *argv[])
//{
//     if (argc != 2)
//     {
//         std::cerr << "Usage: " << argv[0] << " <literal>" << std::endl;
//         return 1;
//     }
//
//     bool is_numeric = true;
//     for (const char *p = argv[1]; *p != '\0'; ++p)
//     {
//         if (!std::isdigit(*p) && *p != '.')
//         {
//             is_numeric = false;
//             break;
//         }
//     }
//
//     if (is_numeric)
//     {
//         double value = std::atof(argv[1]);
//         std::cout << "The argument is a numeric literal: " << value << std::endl;
//     }
//     else
//     {
//         std::cout << "The argument is not a numeric literal" << std::endl;
//     }
//
//     return 0;
// }
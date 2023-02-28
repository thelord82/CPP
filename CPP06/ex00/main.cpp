/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:08:41 by malord            #+#    #+#             */
/*   Updated: 2023/02/28 08:48:24 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>
#include <typeinfo>
#include <limits>
#include "Conversion.hpp"

//TODO Verifier les pseudo literals au complet
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Conversion instance;
        instance.convertLitAndAll(argv[1]);
    }
    return 0;    
}
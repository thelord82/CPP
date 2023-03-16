/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:08:41 by malord            #+#    #+#             */
/*   Updated: 2023/03/16 08:53:00 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>
#include <typeinfo>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Conversion instance;
        instance.convertLitAndAll(argv[1]);
    }
    return 0;
}
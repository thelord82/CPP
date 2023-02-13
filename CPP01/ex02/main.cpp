/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:55:50 by malord            #+#    #+#             */
/*   Updated: 2023/02/13 10:39:55 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
int main()
{
    std::string  brain     = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "brain address is " << &brain << std::endl;
    std::cout << "stringPTR address is " << stringPTR << std::endl;
    std::cout << "stringREF address is " << &stringREF << std::endl;

    std::cout << "brain value is " << brain << std::endl;
    std::cout << "stringPTR value is " << *stringPTR << std::endl;
    std::cout << "stringREF value is " << stringREF << std::endl;
}
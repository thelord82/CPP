/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:35:51 by malord            #+#    #+#             */
/*   Updated: 2023/03/06 15:19:36 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    //TODO Bonifier le main pour que ca ait de l'allure
    
    //std::vector<int> v1;
    //v1.push_back(120);
    //v1.push_back(18);
    //v1.push_back(22);
    std::list<int> lst1;
    lst1.push_back(10);
    lst1.push_back(12);
    lst1.push_back(14);
    std::list<int>::iterator result;

    try 
    {
        result = easyfind(lst1, 12);
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: value wasn't found." << std::endl;
        return (0);
    }
    std::cout << "result = " << *result << std::endl;
    return (0);
}
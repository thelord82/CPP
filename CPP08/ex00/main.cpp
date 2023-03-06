/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:35:51 by malord            #+#    #+#             */
/*   Updated: 2023/03/06 12:11:14 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::list<int> lst1;
    std::vector<int> v1;
    //v1.push_back(120);
    //v1.push_back(18);
    //v1.push_back(22);
    lst1.push_back(10);
    lst1.push_back(12);
    lst1.push_back(14);
    int result;

    try 
    {
        result = easyfind(lst1, 10);
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: value wasn't found." << std::endl;
        return (0);
    }
    std::cout << "result = " << result << std::endl;
    return (0);
}
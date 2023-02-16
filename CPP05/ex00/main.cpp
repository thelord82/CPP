/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:24:27 by malord            #+#    #+#             */
/*   Updated: 2023/02/16 14:41:55 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat test(1, "Gontran");
    Bureaucrat test2(150, "Gaetan");

    std::cout << test << std::endl;
    test.setGradeUp();
    std::cout << test2 << std::endl;
    test2.setGradeDown();
}
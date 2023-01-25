/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:52:33 by malord            #+#    #+#             */
/*   Updated: 2023/01/19 13:56:15 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int j;
    for (int i = 1; argv[i]; i++)
    {
        j = 0;
        while (argv[i][j])
        {
            std::cout << char(toupper(argv[i][j]));
            j++;
        }
        std::cout << " ";
    }
    if (argc == 1)
        std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE";
    std::cout << std::endl;
}
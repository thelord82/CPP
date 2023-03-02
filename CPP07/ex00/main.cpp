/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:15:58 by malord            #+#    #+#             */
/*   Updated: 2023/03/02 09:11:25 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int main(void)
{
    int a = 42;
    int b = 21;

    std::cout << std::endl << "TEST WITH INTEGERS" << std::endl;
    std::cout << "Avant swap : " << a << ", " << b << std::endl;
    swap<int>(&a, &b);
    std::cout << "Apres swap : " << a << ", " << b << std::endl;

    std::cout << "Le min entre " << a << " et " << b << " est " << min<int>(a, b) << std::endl;
    std::cout << "Le max entre " << a << " et " << b << " est " << max<int>(a, b) << std::endl;
    std::cout << std::endl << "--------------------" << std::endl << std::endl;

    float c = 42.0f;
    float d = 21.0f;

    std::cout << "TEST WITH FLOAT" << std::endl;
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << "Avant swap : " << c << ", " << d << std::endl;
    swap<float>(&c, &d);
    std::cout << "Apres swap : " << c << ", " << d << std::endl;

    std::cout << "Le min entre " << c << " et " << d << " est " << min<float>(c, d) << std::endl;
    std::cout << "Le max entre " << c << " et " << d << " est " << max<float>(c, d) << std::endl;
    std::cout << std::endl << "--------------------" << std::endl << std::endl;

    char e = 'a';
    char f = 'z';
    std::cout << "TEST WITH CHAR" << std::endl;
    std::cout << "Avant swap : " << e << ", " << f << std::endl;
    swap<char>(&e, &f);
    std::cout << "Apres swap : " << e << ", " << f << std::endl;

    std::cout << "Le min entre " << e << " et " << f << " est " << min<char>(e, f) << std::endl;
    std::cout << "Le max entre " << e << " et " << f << " est " << max<char>(e, f) << std::endl;
    std::cout << std::endl << "--------------------" << std::endl << std::endl;

    double g = 21.0;
    double h = 42.0;

    std::cout << "TEST WITH DOUBLES" << std::endl;
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << "Avant swap : " << g << ", " << h << std::endl;
    swap<double>(&g, &h);
    std::cout << "Apres swap : " << g << ", " << h << std::endl;

    std::cout << "Le min entre " << g << " et " << h << " est " << min<double>(g, h) << std::endl;
    std::cout << "Le max entre " << g << " et " << h << " est " << max<double>(g, h) << std::endl;
    std::cout << std::endl << "--------------------" << std::endl << std::endl;

    int i = 69;
    int j = 69;

    std::cout << "TEST WITH EQUAL VALUES" << std::endl;
    std::cout << "Le min entre " << i << " et " << j << " est " << min<int>(i, j) << std::endl;
    std::cout << "Le max entre " << i << " et " << j << " est " << max<int>(i, j) << std::endl << std::endl;
}
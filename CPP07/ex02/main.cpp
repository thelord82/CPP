/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:00:33 by malord            #+#    #+#             */
/*   Updated: 2023/03/03 11:32:00 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> a(3);
    for (int i = 0; i < 3; ++i)
        a[i] = 3;
    for (int i = 0; i < 5; ++i)
        std::cout << "a[" << i << "] = " << a[i] << std::endl;
    Array<int> b(a);

    std::cout << "THE SIZE OF ARRAY B IS : " << b.size() << std::endl;
    // for (int i = 0; i < 3; ++i)
    // {
    //     std::cout << "b[" << i << "] = " << b[i] << std::endl;
    //     b[i] = 4;
    //     std::cout << "APRES MODIF : b[" << i << "] = " << b[i] << std::endl;
    //     std::cout << "a[" << i << "] = " << a[i] << std::endl;
    // }
    return 0;
}
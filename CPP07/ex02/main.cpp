/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:00:33 by malord            #+#    #+#             */
/*   Updated: 2023/03/03 10:20:33 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//int main(void)
//{
//    Array<int> a(3);
//    for (int i = 0; i < 3; ++i)
//        a[i] = 3;
//    for (int i = 0; i < 3; ++i)
//        std::cout << "a[" << i << "] = " << a[i] << std::endl;
//    return 0;
//}

int main(void)
{
    Array<int> a(3);
    for (int i = 0; i < 5; ++i)
        a[i] = 3;
    for (int i = 0; i < 5; ++i)
        std::cout << "a[" << i << "] = " << a[i] << std::endl;
    return 0;
}
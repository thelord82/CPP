/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:52:42 by malord            #+#    #+#             */
/*   Updated: 2023/03/16 10:45:16 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    // Execute that test multiple times to see that it randomly creates an object A, B or C.
    
    Base *test = generate();
    Base &test2 = *test;
    identify(test);
    identify(test2);
    delete test;
}
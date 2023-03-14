/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:24:20 by malord            #+#    #+#             */
/*   Updated: 2023/03/14 13:21:40 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    // MAIN FROM THE SUBJECT
    std::cout << "-------------------" << std::endl;
    std::cout << "TEST FROM THE SUBJECT" << std::endl;
    std::cout << "-------------------" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.push(22);
    std::cout << "TOP OF STACK = " << mstack.top() << std::endl; // displays 22
    mstack.pop(); // removes 22
    std::cout << "size = " << mstack.size() << std::endl; // size will be 2 at that point
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    MutantStack<int>::iterator it  = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    std::cout << "stack increment = " << *it << std::endl; // displays 17
    --it; // back to 5
    std::cout << "-------------------" << std::endl;
    std::cout << "MSTACK CONTENTS" << std::endl;
    std::cout << "-------------------" << std::endl;
    for (it = mstack.begin(); it != ite; ++it) // 5-17-3-5-737
        std::cout << "Contents of mstack = " << *it << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "COPIED IN A REAL STACK (must print inverted compared to MSTACK)" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::stack<int> s(mstack); // Copy of mstack in a real stack
    while (!s.empty()) // 737-5-3-17-5
    {
        std::cout << "Contents of s = " << s.top() << std::endl;
        s.pop();
    }
    std::cout << "-------------------" << std::endl;

    std::cout << "-------------------" << std::endl;
    std::cout << "COPY CONSTRUCTOR (must print exactly like MSTACK)" << std::endl;
    std::cout << "-------------------" << std::endl;
    MutantStack<int> test2(mstack);
    std::cout << test2.top() << std::endl;
    for (MutantStack<int>::iterator it = test2.begin(); it != test2.end(); ++it)
        std::cout << "FROM COPY CONSTRUCTOR = " << *it << std::endl;
    std::cout << "-------------------" << std::endl;

    std::cout << "-------------------" << std::endl;
    std::cout << "=OPERATOR OVERLOAD (must print exactly like MSTACK)" << std::endl;
    std::cout << "-------------------" << std::endl;
    MutantStack<int> test3;
    test3 = mstack;
    for (MutantStack<int>::iterator it = test3.begin(); it != test3.end(); ++it)
        std::cout << "AFTER ASSIGNMENT = " << *it << std::endl;
    std::cout << "-------------------" << std::endl;

    // TEST WITH STD::LIST
    std::cout << "-------------------" << std::endl;
    std::cout << "TEST WITH LIST (must print exactly like MSTACK)" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::list<int> testList;
    testList.push_back(5);
    testList.push_back(17);
    testList.push_back(22);
    testList.pop_back();
    testList.push_back(3);
    testList.push_back(5);
    testList.push_back(737);
    std::list<int>::iterator it2;
    for (it2 = testList.begin(); it2 != testList.end(); ++it2)
        std::cout << "Content of list = " << *it2 << std::endl;
    return 0;
}
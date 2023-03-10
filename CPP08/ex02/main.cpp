/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:24:20 by malord            #+#    #+#             */
/*   Updated: 2023/03/10 15:09:12 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    //mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    std::vector<int> tempVec;
    while (!mstack.empty())
    {
        tempVec.push_back(mstack.top());
        mstack.pop();
    }
    
    for (std::vector<int>::const_iterator it = tempVec.begin(); it != tempVec.end(); ++it)
        std::cout << "Value = " << *it << std::endl;

    //Displays and pop the contents of the stack
    //while (!mstack.empty())
    //{
    //    std::cout << "value = " << mstack.top() << std::endl;
    //    mstack.pop();
    //}
    //MutantStack<int>::iterator it  = mstack.begin();
    //MutantStack<int>::iterator ite = mstack.end();
    //++it;
    //--it;
    //while (it != ite)
    //{
    //    std::cout << *it << std::endl;
    //    ++it;
    //}
    //std::stack<int> s(mstack);
    return 0;
}
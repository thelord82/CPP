/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:19 by malord            #+#    #+#             */
/*   Updated: 2023/04/10 16:04:01 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <string>
#include <iostream>
#include <vector>
#include <deque>

template <typename Container>
class PmergeMe
{
private:
    Container _container;
    void sortContainer();
    bool isSorted(void);
    
public:
    PmergeMe(void);
    PmergeMe(const PmergeMe &copy);
    PmergeMe &operator=(const PmergeMe &rhs);
    virtual ~PmergeMe();
    bool checkAndFill(int argc, char **argv);
    void mergeInsert(void);
    template <typename Iterator>
    void sortRest(Iterator begin, Iterator end);
    template <typename Iterator>
    void printContainer(Iterator begin, Iterator end);

    template <typename Iterator>
    void swapData(Iterator begin, Iterator end);
    
    template <typename Iterator>
    void sortHalf(Iterator begin, Iterator end);
};

#endif
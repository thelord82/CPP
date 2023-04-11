/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:19 by malord            #+#    #+#             */
/*   Updated: 2023/04/11 08:36:14 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include <deque>
#include <ctime>

template <typename Container>
class PmergeMe
{
private:
    Container _container;
    clock_t _startClock;
    time_t _startTime;
    clock_t _endClock;
    time_t _endTime;
    
    void sortContainer();
    void sortRest(void);
    void mergeInsert(void);
    
    template <typename Iterator>
    void printContainer(Iterator begin, Iterator end);

    template <typename Iterator>
    void swapData(Iterator begin, Iterator end);
    
    template <typename Iterator>
    void sortHalf(Iterator begin, Iterator end);
    
public:
    PmergeMe(void);
    PmergeMe(const PmergeMe &copy);
    PmergeMe &operator=(const PmergeMe &rhs);
    virtual ~PmergeMe();
    bool checkAndFill(int argc, char **argv);
    bool isSorted(void); // TODO comment ! just to check if the container is indeed sorted
};

#endif
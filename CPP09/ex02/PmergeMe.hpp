/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:19 by malord            #+#    #+#             */
/*   Updated: 2023/04/05 14:02:53 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <string>
#include <iostream>
#include <vector>
#include <deque>
class PmergeMe
{
private:
    
    std::vector<int> _vec;
    std::deque<int> _deq;
    void sortVector();
    void sortDeque();
    
public:
    PmergeMe(void);
    PmergeMe(const PmergeMe &copy);
    PmergeMe &operator=(const PmergeMe &rhs);
    virtual ~PmergeMe();
    bool checkAndFill(int argc, char **argv);
    void mergeInsert(void);
};

template <typename Iterator>
void printContainer(Iterator begin, Iterator end);

template <typename Iterator>
void swapData(Iterator begin, Iterator end);

template <typename Iterator>
void sortHalf(Iterator begin, Iterator end);

//template <typename Container>
//class PmergeMe
//{
//    private:
//        std::vector<int> _rawData;
//        Container _pairs;
//    public:
//        PmergeMe(void);
//        PmergeMe(const PmergeMe &copy);
//        PmergeMe &operator=(const PmergeMe &rhs);
//        virtual ~PmergeMe(void);
//
//        bool checkNumbers(int argc, char **argv);
//        void pairData(void);
//};
//bool compSecond(std::pair<int, int>& p1, std::pair<int, int> &p2);

#endif
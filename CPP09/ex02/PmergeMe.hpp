/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:19 by malord            #+#    #+#             */
/*   Updated: 2023/04/04 12:03:50 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <string>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <deque>
class PmergeMe
{
private:
    std::vector<int> _rawData;
    std::vector<std::pair<int, int> > _pairVec;   
    std::deque<std::pair<int, int> > _pairDeq;
public:
    PmergeMe(void);
    PmergeMe(const PmergeMe &copy);
    PmergeMe &operator=(const PmergeMe &rhs);
    virtual ~PmergeMe();
    void fillVector(char **argv);
    bool checkNumbers(int argc, char **argv);
    void pairData(void);
};
    bool compSecond(std::pair<int, int>& p1, std::pair<int, int>& p2);

#endif
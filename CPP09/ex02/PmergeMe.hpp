/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:19 by malord            #+#    #+#             */
/*   Updated: 2023/04/03 11:38:13 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <string>
#include <iostream>
#include <vector>
#include <set>
class PmergeMe
{
private:
    std::vector<int> _rawData;
    std::vector<std::pair<int, int> > _pairVec;   
    std::multiset<int> _dataMS; // Using multiset will already sort the data, so algorithm should have a runtime of 0! 
public:
    PmergeMe(void);
    PmergeMe(const PmergeMe &copy);
    PmergeMe &operator=(const PmergeMe &rhs);
    virtual ~PmergeMe();
    void fillVector(char **argv);
    bool checkNumbers(int argc, char **argv);
    void pairData(void);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:04:47 by malord            #+#    #+#             */
/*   Updated: 2023/03/06 15:24:12 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_

#include <algorithm>
#include <iostream>
#include <list>
#include <map>
#include <string>
#include <vector>

template <typename T> typename T::iterator easyfind(T first, int second)
{
    typename T::iterator it = std::find(first.begin(), first.end(), second);

    if (it != first.end())
        return (it);
    throw std::exception();
    return (it);
}

#endif

// Implementation d'iterateurs generique

/*
#include <iostream>
#include <list>
#include <vector>

template<typename Container>
void print_container(const Container& container)
{
    // Define a generic iterator that works for both std::vector and std::list
    typedef typename Container::value_type value_type;
    typedef typename Container::iterator iterator_type;
    typedef typename Container::const_iterator const_iterator_type;

    typedef typename std::iterator_traits<iterator_type>::iterator_category iterator_category;
    typedef typename std::iterator_traits<const_iterator_type>::iterator_category const_iterator_category;

    typedef typename std::conditional<
        std::is_same<iterator_category, std::random_access_iterator_tag>::value
        && std::is_same<const_iterator_category, std::random_access_iterator_tag>::value,
        iterator_type, const_iterator_type>::type generic_iterator;

    // Print the elements of the container using the iterator
    for (generic_iterator it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;
}

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print_container(v);

    std::list<double> l;
    l.push_back(4.0);
    l.push_back(5.0);
    l.push_back(6.0);
    print_container(l);

    return 0;
}
*/
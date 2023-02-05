/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pairs.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:53:38 by mal               #+#    #+#             */
/*   Updated: 2023/02/02 12:16:52 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;


int pairs(int k, vector<int> arr) {
    unordered_map<long, int> container;
    for(int i = 0; i < arr.size(); i++) {
        container[arr[i]]++;
    }
    for (const auto &i : container) {
        std::cout << "content = " << i.first << std::endl;
    }
    int count = 0;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++) {
        if(container[arr[i] + k]) {
            count++;
        }
        //container[arr[i]]--;
    }
    
    return count;
}

//int pairs(int k, vector<int> arr) { // works but times out some tests
//    int nbPairs = 0;
//    for (int i = 0; i < arr.size(); i++)
//    {
//        int toFind = arr[i] + k;
//        for (int j = 0; j < arr.size(); j++)
//        {
//            if (arr[j] == toFind)
//            {
//                nbPairs++;
//                break;
//            }
//        }
//    }
//    return (nbPairs);
//}

int main()
{
    vector<int> test = {1, 5, 3, 4, 2};
    
    cout << pairs(2, test) << endl;
}




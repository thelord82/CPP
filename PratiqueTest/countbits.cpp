/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countbits.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:36:45 by mal               #+#    #+#             */
/*   Updated: 2023/02/05 17:24:08 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>

using namespace std;

std::vector<int> getOneBits(int n) {
    std::vector<int> binary;
    vector<int> indexes;
    while (n > 0) {
        binary.push_back(n & 1);
        n = n >> 1;
    }
    //return binary;
    for (int i = 0; i < binary.size(); i++)
    {
        if (binary[i] == 1)
            indexes.push_back(i + 1);
    }
    indexes.insert(indexes.begin(), indexes.size());
    return indexes;
}

//vector<int> getOneBits(int n) {
//    vector<int> result;
//    vector<int> indexes;
//    int i = 0;
//    while (n > 0)
//    {
//        if (n % 2 == 0)
//            result.push_back(0);
//        else
//            result.push_back(1);
//        i++;
//        n /= 2;
//    }
//    reverse(result.begin(), result.end());
//    for (int i = 0; i < result.size(); i++)
//    {
//        if (result[i] == 1)
//            indexes.push_back(i + 1);
//    }
//    int size = indexes.size();
//    indexes.insert(indexes.begin(), size);
//    
//    return (indexes);
//}

int main()
{
    vector<int> test = getOneBits(161);
    for (int i = 0; i < test.size(); i++)
        cout << "test[" << i << "] = " << test[i] << endl;
    cout << endl;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countbits.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:36:45 by mal               #+#    #+#             */
/*   Updated: 2023/02/03 11:58:02 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>

using namespace std;

vector<int> getOneBits(int n) {
    vector<int> result;
    vector<int> indexes;
    int i = 0;
    while (n > 0)
    {
        if (n % 2 == 0)
            result.push_back(0);
        else
            result.push_back(1);
        i++;
        n /= 2;
    }
    reverse(result.begin(), result.end());
    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] == 1)
            indexes.push_back(i + 1);
    }
    int size = indexes.size();
    indexes.insert(indexes.begin(), size);
    
    return (indexes);
}

int main()
{
    vector<int> test = getOneBits(42);
    for (int i = 0; i < test.size(); i++)
        cout << "result[i] = " << test[i] << endl;
}


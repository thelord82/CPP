/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trucks.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:40:59 by malord            #+#    #+#             */
/*   Updated: 2023/02/01 15:37:06 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int truckTour(vector<vector<int> > petrolTanks)
{
    int startPoint = 0;
    int gasLeft = 0;
    int checkedPumps = 0;
    int i = 0;
    for (int i = 0; i < petrolTanks.size(); i++)
    {
        if (petrolTanks[i][0] > petrolTanks[i][1]) // if qty is greater than distance so that the trip can start
        {
            startPoint = i;
            gasLeft += petrolTanks[i][0];
            checkedPumps++;
            while (checkedPumps != petrolTanks.size())
            {
                gasLeft -= petrolTanks[i][1];
                if (gasLeft < 0 && checkedPumps < petrolTanks.size())
                    return (-1);
                else
                {
                    i++;
                    if (i == petrolTanks.size())
                        i = 0;
                    gasLeft += petrolTanks[i][0];
                }
                checkedPumps++;
            }
            break;
        }
    }
    return (startPoint);
}

int main()
{
    vector<vector<int> > petrolpumps = {
        {2, 8},
        {2, 3},
        {8, 2},
        {8, 2}};
    
    int result = truckTour(petrolpumps);
    cout << "answer = " << result << endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trucks.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:40:59 by malord            #+#    #+#             */
/*   Updated: 2023/02/01 19:05:48 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int truckTour(vector<vector<int>> petrolpumps) {
    int fuel = 0;
    int start = 2;
    int stops = 0;
    int position = start;
    while (stops < petrolpumps.size())
    {
        fuel += petrolpumps[position][0] - petrolpumps[position][1];
        if (fuel < 0)
        {
            fuel = 0;
            stops = 0;
            start = (start + 1) % petrolpumps.size();
            position = start;
        }
        else
        {
            stops++;
            position = (position + 1) % petrolpumps.size();
        }
    }
    return (start);
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
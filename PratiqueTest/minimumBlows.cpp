/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimumBlows.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:28:03 by mal               #+#    #+#             */
/*   Updated: 2023/02/02 15:27:15 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int getMinimumBlows(vector<int> height) {
    int i = 0;
    int end = height.size() - 1;
    int moves = 0;
    while (end != -1)
    //while (i != end && end > i)
    {
        while (height[i + 1] > height[i])
        {
            height.erase(height.begin()+ i);
            if (height.empty())
                break;
            //i++;
        }
        height.erase(height.begin()+ i);
        end = height.size() - 1;
        //i++;
        moves++;
        if (height.empty())
            break;
        while (height[end] < height[end - 1])
        {
            height.erase(height.end() - 1);
            end = height.size() - 1;
            //end--;
        }
        //if (end < i)
        if (height.empty())
            break;
        height.erase(height.end() - 1);
        end = height.size() - 1;
        moves++;
        //end--;
    }
    //if (end == i)
    //    moves++;
    return (moves);
}

int main()
{
    vector<int> test = {22, 75, 26, 45, 72, 81, 47, 29, 97, 2, 75, 25, 82, 84, 17, 56, 32, 2, 28, 37, 57, 39, 18, 11, 79, 6, 40, 68, 68, 16, 40, 63, 93, 49, 91, 10, 55, 68, 31, 80, 57, 18, 34, 28, 76, 55, 21, 80, 22, 45};
    cout << getMinimumBlows(test) << endl;
}
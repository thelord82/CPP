/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mex.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:18:53 by mal               #+#    #+#             */
/*   Updated: 2023/02/05 17:06:09 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>

using namespace std;

//bool findInArray(vector<int> arr, int toFind) // Checks if the element is already in array
//{
//    for (int i = 0; i < arr.size(); i++)
//    {
//        if (arr[i] == toFind)
//            return (true);
//    }
//    return (false);
//}

//vector<int> findDuplicates(vector<int> nums) {
//      int n = nums.size();
//      vector <int> ans;
//      for(int i = 0; i < n; i++){
//         int x = abs(nums[i]);
//         x--;
//         if(nums[x] < 0) ans.push_back(x + 1);
//         else nums[x] *= -1;
//      }
//      return ans;
//   }

int getMaximumMEX(vector<int> arr) {
    //MEX will always be arr.size() unless there is duplicates in the array. Need to find it that's the case.
    int mex = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= mex)
            mex++;
    }
    return (mex);
}

int main()
{
    //vector<int> test = {1, 2, 2, 1, 5, 4};
    vector<int> test = {0, 1, 2, 3, 4, 5};
    //vector<int> doubles = findDuplicates(test);
    //for (int i = 0; i < doubles.size(); i++)
    //    cout << "doubles[i] = " << doubles[i] << endl;
    cout << getMaximumMEX(test) << endl;
}
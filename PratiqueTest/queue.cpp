/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:04:03 by mal               #+#    #+#             */
/*   Updated: 2023/02/02 08:55:12 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int queries;
    int command, number;
    vector<int> queue;
    cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        cin >> command;
        switch (command)
        {
            case 1: 
                cin >> number;
                queue.push_back(number);
                break;
            case 2: 
                queue.erase(queue.begin());
                break;
            case 3:
                cout << queue.front() << endl;
                break;
        }
    }
    return 0;
}

//int main() {
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//    vector <int> q;
//    int n,input,number;
//    cin >> n ;
//    for (int i = 0 ; i < n ; i++)
//    {
//         cin >> input;   
//         switch (input)
//         {
//            case 1 :
//                cin >> number;
//                q.push_back(number);
//                break;
//            case 2 :
//            {
//                vector<int>::iterator it = q.begin();
//                q.erase(it);
//                break;
//            }
//
//            case 3 :
//                cout << q.front() << endl;
//                break;  
//         }
//    }
//    
//    return 0;
//}
//

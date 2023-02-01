/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimumBribes.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:57:18 by malord            #+#    #+#             */
/*   Updated: 2023/02/01 14:03:26 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//void minimumBribes(vector<int> q) {
//	int moves = 0;
//	int totalMoves = moves;
//	if (!is_sorted(q.begin(), q.end()))
//	{
//		vector<int> sorted = q;
//		sort(sorted.begin(), sorted.end());
//		if (q != sorted)
//		{
//			for (int i = (q.size() - 1); i >= 0; i--)
//			{
//				while (q[i] != sorted[i])
//				{
//					swap(sorted[i], sorted[i - 1]);
//					moves++;
//					i--;
//				}
//				if (moves > 2)
//				{
//					cout << "Too chaotic" << endl;
//					return;
//				}
//				else
//				{
//					totalMoves += moves;
//					moves = 0;
//				}
//				i = q.size();
//			}
//		}
//	}
//	cout << totalMoves << endl;
//}
int findInArray(vector<int>arr, int begin, int value)
{
	//while (begin != end)
	while (begin < arr.size())
	{
		if (arr[begin] == value)
			return (begin);
		begin++;
	}
	return (-1);
}
void minimumBribes(vector<int> q) {
    int totalBribes = 0;

    for(int i = 0; i < q.size(); i++)
	{
        if (q[i] - (i + 1) > 2) 
		{
            cout << "Too chaotic" << endl;
            return;
        }
        
        for (int j = q[i] - 2; j < i; j++) 
		{
            if (q[j] > q[i])
                totalBribes++;
        }
    }
    cout << totalBribes << endl;
}

int main()
{
	int test[] = {2, 5, 1, 3, 4};
	//int test2[] = {2, 1, 5, 3, 4};
	std::vector<int> v(test, test + sizeof(test)/sizeof(test[0]));
	//std::vector<int> w(test2, test2 + sizeof(test2)/sizeof(test2[0]));
	minimumBribes(v);
	//minimumBribes(w);
}

//int main()
//{
//    string t_temp;
//    getline(cin, t_temp);
//
//    int t = stoi(ltrim(rtrim(t_temp)));
//
//    for (int t_itr = 0; t_itr < t; t_itr++) {
//        string n_temp;
//        getline(cin, n_temp);
//
//        int n = stoi(ltrim(rtrim(n_temp)));
//
//        string q_temp_temp;
//        getline(cin, q_temp_temp);
//
//        vector<string> q_temp = split(rtrim(q_temp_temp));
//
//        vector<int> q(n);
//
//        for (int i = 0; i < n; i++) {
//            int q_item = stoi(q_temp[i]);
//
//            q[i] = q_item;
//        }
//
//        minimumBribes(q);
//    }
//
//    return 0;
//}
//
//string ltrim(const string &str) {
//    string s(str);
//
//    s.erase(
//        s.begin(),
//        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//    );
//
//    return s;
//}
//
//string rtrim(const string &str) {
//    string s(str);
//
//    s.erase(
//        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//        s.end()
//    );
//
//    return s;
//}
//
//vector<string> split(const string &str) {
//    vector<string> tokens;
//
//    string::size_type start = 0;
//    string::size_type end = 0;
//
//    while ((end = str.find(" ", start)) != string::npos) {
//        tokens.push_back(str.substr(start, end - start));
//
//        start = end + 1;
//    }
//
//    tokens.push_back(str.substr(start));
//
//    return tokens;
//}
//
//2022.02.28
#include <iostream>
#include <string>
#include <map>
#include <math.h>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;
using std::map;
using std::make_pair;
using std::sort;

int main()
{
    int n;
    cin >> n;
    string str;
    map<char, int> num;
    int* numArr;

    for(int i=0; i < n; i++)
    {
        cin >> str;
        for(int i=str.size() - 1; i >= 0; i--)
        {
            int number = pow(10, str.size() - i-1);
            if(num.find(str[i]) != num.end())
            {
                num[str[i]] += number;
            }
            else
            {
                num.insert(make_pair(str[i], number));
            }
        }
    }

    numArr = new int[num.size()];
    int t = 0;
    
    for(auto it = num.begin(); it != num.end(); it++)
    {
        numArr[t] = it->second;
        t++;
    }
    
    sort(numArr, numArr+t);
    
    int mul = 9;
    int result = 0;
    
    for(int i = t-1; i >= 0; i--)
    {
        result += numArr[i] * mul;
        mul--;
    }
    
    cout << result;
}

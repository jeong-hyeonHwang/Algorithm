//2022.02.11
#include <iostream>
#include <map>
#include <algorithm>

using std::cin;
using std::cout;
using std::map;
using std::sort;

int main()
{
    int n[3];

    while(true)
    {
        map<int, int> num;
        for(int i=0; i<3; i++)
        {
            cin >> n[i];
            if(num.find(n[i]) == num.end())
            {
                num.insert({n[i], 1});
            }
            else
                num[n[i]] += 1;
        }
        if(num.size() == 1)
        {
            if(num.find(0) == num.end())
                cout << "Equilateral";
            else
                break;
        }
        else if(num.size() == 2)
        {
            sort(n, n+3);
            if(n[0] + n[1] > n[2])
                cout << "Isosceles";
            else
                cout << "Invalid";
        }
        else if(num.size() == 3)
        {
            sort(n, n+3);
            if(n[0] + n[1] > n[2])
                cout << "Scalene";
            else
                cout << "Invalid";
        }
        cout << '\n';
    }
}
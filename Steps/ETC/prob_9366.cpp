//2022.05.15
#include <iostream>
#include <map>

using std::cin;
using std::cout;
using std::map;
using std::make_pair;

int main()
{
    int caseT;
    cin >> caseT;

    int num;
    for(int i =0; i < caseT; i++)
    {
        map<int, int> m;
        for(int i=0; i < 3; i++)
        {
            cin >> num;
            if(m.find(num) != m.end())
            {
                m[num] += 1;
            }
            else
            {
                m.insert(make_pair(num, 1));
            }
        }
        cout << "Case #" << i+1 << ": ";
        map<int,int>::iterator it;
        int arr[3] = {0};
        int count = 0;
        switch (m.size())
        {
            case 1:
                cout << "equilateral";
                break;
            case 2:
                for(it = m.begin(); it != m.end(); it++)
                {
                    if(it->second == 1)
                    {
                        arr[count] = it->first;
                        count += 1;
                    }
                    else
                    {
                        arr[count] = it->first;
                        arr[count+1] = it->first;
                        count += 2;
                    }
                }
                if(arr[2] >= arr[0] + arr[1])
                {
                     cout << "invalid!";
                }
                else
                {
                    cout << "isosceles";   
                }
                break;
            case 3:
                int num = 0;
                for(it = m.begin(); it != m.end(); it++)
                {
                    if(count != 2)
                    {
                        num += it->first;
                    }
                    else
                    {
                        if(it->first >= num)
                        {
                            cout << "invalid!";
                        }
                        else
                        {
                            cout << "scalene";
                        }
                    }
                    count += 1;
                }
                break;
        }
        cout << '\n';
    }
}

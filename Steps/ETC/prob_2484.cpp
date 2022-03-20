//2022.03.20
#include <iostream>
#include <map>

using std::cin;
using std::cout;
using std::map;
using std::make_pair;

int main()
{
    int n;
    cin >> n;
    int num = 0;
    int max = 0;
    for(int i=0; i < n; i++)
    {
        map<int, int> m;
        for(int j =0; j < 4; j++)
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
        int dice = 0;
        
        std::map<int,int>::iterator it = m.begin();
        if(m.size() == 4)
        {
            it++;
            it++;
            it++;
            dice = it->first;
            dice = dice * 100;
        }
        else if(m.size() == 3)
        {
            for(it = m.begin(); it != m.end(); it++)
            {
                if(it -> second == 2)
                {
                    dice = it -> first;
                    break;
                }
            }
            dice = 1000 + dice * 100;
        }
        else if(m.size() == 2)
        {
            if(it -> second == 2)
            {
                dice = it-> first;
                it++;
                dice += it -> first;
                dice = 2000 + dice * 500;
            }
            else
            {
                for(it = m.begin(); it != m.end(); it++)
                {
                    if(it->second == 3)
                    {
                        dice = it -> first;
                        dice = 10000 + dice * 1000;
                        break;
                    }
                }
            }
        }
        else if(m.size() == 1)
        {
            dice = it -> first;
            dice = 50000 + dice * 5000;
        }
        

        if(max < dice)
            max = dice;
    }

    cout << max;
}
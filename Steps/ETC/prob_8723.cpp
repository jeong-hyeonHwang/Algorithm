//2022.02.12
#include <iostream>
#include <map>
#include <algorithm>

using std::cin;
using std::cout;
using std::make_pair;
using std::map;
using std::sort;

int Square(int n)
{
    return n * n;
}

int main()
{
    int num[3];
    map<int, int> m;
    bool equ = false; // 정삼각형
    bool right = false; // 직각삼각형
    for(int i=0; i<3; i++)
    {
        cin >> num[i];
        if(m.find(num[i]) != m.end())
        {
            m.insert(make_pair(num[i], 1));
        }
        else
            m[num[i]] += 1;
    }    
    
    sort(num, num+3);

    if(m.size() == 1)
        equ = true;
    else
        equ = false;
    
    if(Square(num[0]) + Square(num[1]) == Square(num[2]))
        right = true;
    else
        right =false;

    if(equ == true)
        cout << 2;
    else if(right == true)
        cout << 1;
    else
        cout << 0;
}

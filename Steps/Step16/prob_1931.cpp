//2022.02.23
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::sort;
using std::pair;

int main()
{
    
    int count = 0;
    
    int n;
    cin >> n;
    
    pair<int, int>* p = new pair<int, int>[n];
    
    for(int i=0; i< n; i++)
    {
        cin >> p[i].second >> p[i].first;
    }
    
    sort(p, p+n);
    
    int startTime = 0;
    for(int i=0; i< n; i++)
    {
        if(p[i].second >= startTime)
        {
            startTime = p[i].first;
            count++;
        }
    }

    cout << count;
}
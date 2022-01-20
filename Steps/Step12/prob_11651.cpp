//2022.01.20
#include <iostream>

using std::cin;
using std::cout;
using std::pair;

void qS(int left, int right, pair<int, int>* p)
{
    if(left >= right)
    {
        return;
    }
    
    int i = left;
    pair<int,int> &pivot =p[right];
    
    for(int j = left; j < right; ++j)
    {
        if(p[j] < pivot)
        {
            std::swap(p[i++], p[j]);
        }
    }
    std::swap(p[i], pivot);
        
        qS(left, i-1, p);
        qS(i+1, right, p);
    
}
int main()
{
    int n;
    cin >> n;
    pair <int, int> * loc = new pair<int,int>[n];

    for(int i =0; i< n; i++)
    {
        cin >> loc[i].second >> loc[i].first;
    }
    
    qS(0, n-1, loc);

    for(int i =0; i< n; i++)
    {
        cout << loc[i].second << " " << loc[i].first << '\n';
    }
}
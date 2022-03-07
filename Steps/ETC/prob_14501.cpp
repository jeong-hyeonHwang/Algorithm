//2022.03.07
#include <iostream>

using std::cin;
using std::cout;
using std::pair;

int n;
pair<int, int>* p = new pair<int, int>[n];
int result;

void DFS(int startIndex, int pay)
{
    if(startIndex >= n)
    {
        result = result > pay? result : pay;
        return;
    }
    
    if(startIndex + p[startIndex].first <= n)
    {
            DFS(startIndex + p[startIndex].first,
         pay + p[startIndex].second);
    }
    
    if(startIndex + 1 <= n)
        DFS(startIndex + 1, pay);
}

int main()
{
    result = 0;
    cin >> n;
    p = new pair<int, int>[n];
    for(int i=0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }

    DFS(0, 0);
    cout << result;
}
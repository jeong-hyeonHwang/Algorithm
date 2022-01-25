//2022.01.25
#include <iostream>

using std::cin;
using std::cout;

int* node;

void dfs(int n, int m, int depth)
{
    if(m == depth)
    {
        for(int t=0; t < m; t++)
        {
            cout << node[t] << " ";
        }
        cout << '\n';
        return;
    }
    
    int startP = 1;
    if(depth != 0)
        startP = node[depth - 1];
        
    for(int i= startP; i <= n; i++)
    {
            node[depth] = i;
            dfs(n, m, depth+1);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    node = new int[m];
    dfs(n,m,0);
}
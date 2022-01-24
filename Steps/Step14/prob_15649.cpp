//2022.01.24
#include <iostream>

using std::cin;
using std::cout;

int* node;
bool* visitCheck;

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

    for(int i=0; i < n; i++)
    {
        if(visitCheck[i] == false)
        {
            visitCheck[i] = true;
            node[depth] = i+1;
            dfs(n, m, depth+1);
            
            visitCheck[i] = false;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    node = new int[m];
    visitCheck = new bool[n];
    dfs(n,m,0);
}
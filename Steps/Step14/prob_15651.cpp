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

    for(int i=0; i < n; i++)
    {
        node[depth] = i+1;
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

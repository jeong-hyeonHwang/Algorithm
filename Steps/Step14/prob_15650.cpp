//2022.01.24
#include <iostream>

using std::cin;
using std::cout;

int* node;
int n, m;

void dfs(int startP, int depth)
{
    if(depth == m)
    {
        for(int t=0; t < m; t++)
        {
            cout << node[t] << " ";
        }
        cout << '\n';
        return;
    }

    for(int i=startP; i <= n; i++)
    {
        node[depth] = i;
        dfs(i + 1, depth + 1);
    }
}

int main()
{
    cin >> n >> m;

    node = new int[m];
    dfs(1,0);
}
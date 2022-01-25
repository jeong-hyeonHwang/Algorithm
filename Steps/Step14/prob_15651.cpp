//2022.01.25
#include <iostream>

using std::cin;
using std::cout;

int* node;

void dfs(int n, int m, int depth)
{
    // 현재 depth가 m이라면
    // 즉, n개로부터 m개를 선택 완료 했다면 -> 해당 Arr 출력
    if(m == depth)
    {
        for(int t=0; t < m; t++)
        {
            cout << node[t] << " ";
        }
        cout << '\n';
        return;
    }

    // depth에 상관없이 모든 숫자를 다 출력 가능하므로
    // 따로 visitCheck는 필요하지 않다
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

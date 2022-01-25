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
    
    int startP = 1;

    // 비내림차순이 되기 위해
    // 재귀적으로 실행되는 다음 노드의 값은
    // 이전 depth node에서 쓰인 숫자로부터 start
    if(depth != 0)
        startP = node[depth - 1];

    // depth에 상관없이 모든 숫자를 다 출력 가능하므로      
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
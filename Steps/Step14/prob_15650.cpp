//2022.01.24
#include <iostream>

using std::cin;
using std::cout;

int* node;
int n, m;

void dfs(int startP, int depth)
{
    // 현재 depth가 m이라면
    // 즉, n개로부터 m개를 선택 완료 했다면 -> 해당 Arr 출력
    if(depth == m)
    {
        for(int t=0; t < m; t++)
        {
            cout << node[t] << " ";
        }
        cout << '\n';
        return;
    }

    // [1 4] [4 1]과 같은 케이스가 존재해선 안되기 때문에
    // for문 내부의 dfs의 시작 포인트는 i+1
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
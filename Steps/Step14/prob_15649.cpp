//2022.01.24
#include <iostream>

using std::cin;
using std::cout;

int* node;
bool* visitCheck;

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

    for(int i=0; i < n; i++)
    {
        if(visitCheck[i] == false)
        {
            visitCheck[i] = true;
            node[depth] = i+1;
            dfs(n, m, depth+1);
            
            // visitCheck[i]를 false로 바꿔주지 않으면
            // 4 2 케이스의 결과값
            // 전체 숫자가 이미 방문 상태가 true이기 때문에
            // [1 2] [1 3] [1 4]에서 중단된다
            visitCheck[i] = false;
        }
    }
}

// 1 TO n까지의 숫자 중에서 m개를 고른 수열을 출력
// 단, 중복 X

int main()
{
    int n, m;
    cin >> n >> m;

    node = new int[m];
    visitCheck = new bool[n]; // 중복해서 들어가는지를 검사하기 위함
    dfs(n,m,0);
}
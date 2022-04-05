//2022.04.05
#include <iostream>

using std::cin;
using std::cout;

int max = 0;
int* arr;
int N, M;

void dfs(int index, int snow, int depth)
{
    if(M >= depth)
    {
        if(max < snow)
        {
            max = snow;
        }
    }
    else
        return;
        
    if(index <= N-1)
        dfs(index+1, snow + arr[index+1], depth + 1);
    if(index <= N-2)
        dfs(index+2, snow/2 + arr[index+2], depth + 1);
}   

int main()
{
    cin >> N >> M;
    arr = new int[N+1];
    for(int i=1; i <= N; i++)
    {
        cin >> arr[i];
    }
    dfs(0, 1, 0);
    cout << max;
}
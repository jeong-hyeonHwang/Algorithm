//2022.03.26
//prob_15650 응용
#include <iostream>

using std::cin;
using std::cout;

int* numArr;
bool* check;
int* node;
int n = 0;
int sum = 0;
int s = 0;
int result = 0;
int startPoint = 0;

void dfs(int startP, int size, int depth)
{
    if(depth == size)
    {
        for(int i=0; i < size; i++)
        {
            sum += numArr[node[i]];
        }
        
        if(sum == s)
        {
            result += 1;
        }
        sum = 0;
        return;
    }

    for(int i=startP; i < n; i++)
    {
        node[depth] = i;
        dfs(i + 1, size, depth + 1);
    }
}

int main()
{
    cin >> n >> s;
    
    numArr = new int[n];
    for(int i=0; i < n; i++)
    {
        cin >>  numArr[i];
    }
    
    for(int i = 1; i <= n; i++)
    {
        node = new int[i];
        dfs(0,i,0);
    }
    
    cout << result;
}
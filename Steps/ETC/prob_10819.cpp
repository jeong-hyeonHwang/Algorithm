//2022.02.26
#include <iostream>

using namespace std;

int n;
int maxResult;
int* arr;
int* result;
bool* check;

int AbsMinus(int n1, int n2)
{
    int m = n1 - n2;
    return m > 0? m : -m;
}

void dfs(int startPoint, int depth)
{
    if(startPoint == depth)
    {
        int sum = 0;
        
        // for(int k=0; k < n; k++)
        // {
        //     cout << arr[k] << ' ';
        // }
        // cout << '\n';
        
        for(int k=0; k < n-1; k++)
        {
            sum += AbsMinus(result[k], result[k+1]);
        }
        if(sum > maxResult)
            maxResult = sum;
        return;
    }
    
    for(int i=0; i<n; i++)
    {
        if(check[i] == false)
        {
            check[i] = true;
            result[depth] = arr[i];
            dfs(n, depth + 1);
            check[i] = false;
        }
    }
}

int main()
{
    cin >> n;
    maxResult = 0;
    
    arr = new int[n];
    result = new int[n];
    check = new bool[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    dfs(n, 0);
    cout << maxResult;
}
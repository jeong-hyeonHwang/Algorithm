//2022.02.26
#include <iostream>

using std::cin;
using std::cout;

int n;
int* arr;
bool* check;

void dfs(int startPoint, int depth)
{
    if(startPoint == depth)
    {
        for(int k=0; k < n; k++)
        {
            cout << arr[k] << ' ';
        }
        cout << '\n';
        return;
    }
    
    for(int i=0; i<n; i++)
    {
        if(check[i] == false)
        {
            check[i] = true;
            arr[depth] = i + 1;
            dfs(n, depth + 1);
            check[i] = false;
        }
    }
}

int main()
{
    cin >> n;
    
    arr = new int[n];
    check = new bool[n];
    
    dfs(n, 0);
}
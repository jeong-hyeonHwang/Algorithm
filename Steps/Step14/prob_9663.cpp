//2022.01.26-2022.02.03
#include <iostream>

using std::cin;
using std::cout;

int* node;
int result;
int n;

int Absolute(int num)
{
    return num > 0? num : -num;
}

bool ConditionCheck(int num)
{
    for(int j=0; j <num; j++)
    {
        if(node[num] == node[j] || Absolute(num-j) ==  Absolute(node[num] - node[j]))
            return false;
    }
    return true;
}
void dfs(int depth)
{
    if(n == depth)
    {
        result += 1;
        return;
    }
    else
    {
        for(int i=0; i< n; i++)
        {
            node[depth] = i; // depth: 행에서의 위치, i: 열에서의 위치
            if(ConditionCheck(depth) == true)
            {
                dfs(depth + 1);
            }
        }
    }
}


int main()
{
    cin >> n;
    node = new int[n];

    dfs(0);

    cout << result;
}
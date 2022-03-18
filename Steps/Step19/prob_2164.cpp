//2022.03.18
#include <iostream>
#include <queue>

using std::cin;
using std::cout;
using std::queue;

int main()
{
    int n;
    queue<int> q;

    cin >> n;

    for(int i=1; i <= n; i++)
    {
        q.push(i);
    }

    int num = 0;
    while(q.size() != 1)
    {
        q.pop();
        num = q.front();
        q.pop();
        q.push(num);
    }
    cout << q.front();
}
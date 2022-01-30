//2022.01.30
#include <iostream>
#include <stack>

using std::cin;
using std::cout;
using std::stack;

int main()
{
    stack<int> num;
    int k;
    cin >> k;    

    for(int i=0; i<k; i++)
    {
        int n;
        cin >> n;
        if(n != 0)
            num.push(n);
        else
            num.pop();
    }
    int result = 0;
    while(!num.empty())
    {
        result += num.top();
        num.pop();
    }

    cout << result;

}
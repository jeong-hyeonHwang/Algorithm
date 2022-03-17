//2022.03.17
#include <iostream>
#include <stack>
#include <vector>

using std::cin;
using std::cout;
using std::stack;
using std::vector;

int main()
{
    int n;
    cin >> n;
    stack<int> s;
    int num;
    vector<int> v;
    vector<int> result;

    for(int i=0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    for(int i = n-1; i >= 0; i--)
    {
        while(s.empty() == false && v[i] >= s.top())
        {
            s.pop();
        }

        if(s.empty() == true)
            result.push_back(-1);
        else
            result.push_back(s.top());

        s.push(v[i]); 
    }

    for(int i=n-1; i >= 0; i--)
    {
        cout << result[i] << '\n';
    }
}
//2022.03.16
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
    int* num = new int[n];
    int currentNum = 1;
    stack<int> s;
    vector<char> v;

    for(int i=0; i < n; i++)
    {
        cin >> num[i];
    }

    for(int i = 1; i <= n; i++)
    {
        while(true)
        {
            if(s.empty() == false)
            {
                if(s.top() == num[i-1])
                {
                    s.pop();
                    v.push_back('-');
                    break;
                }
                else
                {
                    if(num[i-1] > currentNum)
                    {
                        s.push(currentNum);
                        v.push_back('+');
                        currentNum += 1;
                    }
                    else if(num[i-1] == currentNum)
                    {
                        s.push(currentNum);
                        v.push_back('+');
                        currentNum += 1;
                    }
                    else
                    {
                        cout << "NO";
                        return 0;
                    }
                }
            }
            else
            {
                if(num[i-1] > currentNum)
                {
                    s.push(currentNum);
                    v.push_back('+');
                    currentNum += 1;
                }
                else if(num[i-1] == currentNum)
                {
                    s.push(currentNum);
                    v.push_back('+');
                    currentNum += 1;
                }
            }
        }
    }

    for(int i=0; i < v.size(); i++)
    {
        cout << v[i] << '\n';
    }
}
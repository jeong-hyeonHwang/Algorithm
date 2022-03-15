//2022.03.15
#include <iostream>
#include <string>
#include <stack>

using std::cin;
using std::cout;
using std::string;
using std::stack;

stack<int> s;
int result = 0;

int POP()
{
    int value = -1;
    if(s.size()!= 0)
    {
        value = s.top();
        s.pop();
    }
    return value;
}

int SIZE()
{
    return s.size();
}

int EMPTY()
{
    if(s.empty() == true)
        return 1;
    else
        return 0;
}

int TOP()
{
    int value = -1;
    if(s.size() != 0)
        value = s.top();
    return value;
}

void PUSH(int n)
{
    s.push(n);
}

void CMDCase(string s)
{
    if(s == "pop")
    {
        result = POP();
    }
    else if(s == "size")
    {
        result = SIZE();
    }
    else if(s == "empty")
    {
        result = EMPTY();
    }
    else if(s == "top")
    {
        result = TOP();
    }
    else
    {
        string num = "";
        for(int k = 5; k < s.size(); k++)
        {
            num += s[k];
        }
        PUSH(stoi(num));
        return;
    }
    cout << result << '\n';
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string cmd;
    for(int i=0; i < n; i++)
    {
        getline(cin, cmd);
        CMDCase(cmd);
    }
}
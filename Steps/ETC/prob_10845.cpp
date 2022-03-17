//2022.03.17
#include <iostream>
#include <string>
#include <queue>

using std::cin;
using std::cout;
using std::string;
using std::queue;

queue<int> q;

int POP()
{
    int result = 0;
    if(q.empty() == false)
    {
        result = q.front();
        q.pop();
    }
    else
    {
        result = -1;
    }
    return result;
}

int SIZE()
{
    return q.size();
}

int EMPTY()
{
    if(q.empty() == true)
        return 1;
    else
        return 0;
}

int FRONT()
{
    if(q.empty() == false)
        return q.front();
    else
        return -1;
}

int BACK()
{
    if(q.empty() == false)
        return q.back();
    else
        return -1;
}

void PUSH(int i)
{
    q.push(i);
}
void CMDCheck(string s)
{
    int result = -5;

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
    else if(s == "front")
    {
        result = FRONT();
    }
    else if(s == "back")
    {
        result = BACK();
    }
    else
    {
        string num = "";
        for(int i = 5; i < s.size(); i++)
        {
            num += s[i];
        }
        PUSH(stoi(num));
    }
    
    if(result != -5)
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
        CMDCheck(cmd);
    }
}
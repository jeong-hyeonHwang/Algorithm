//2022.03.19
#include <iostream>
#include <deque>
#include <string>

using std::cin;
using std::cout;
using std::deque;
using std::string;

deque<int> dq;
int size = 0;
void PUSH(bool front, int num)
{
    if(front == true) // push_front
    {
        dq.push_front(num);
    }
    else // push_back
    {
        dq.push_back(num);
    }

    size += 1;
}

int POP(int sSize)
{
    int num = 0;
    if(size != 0)
    {
        if(sSize == 8) // pop_back
        {
            num = dq.back();
            dq.pop_back();
        }
        else if(sSize == 9) // pop_front
        {
            num = dq.front();
            dq.pop_front();
        }
        size -= 1;
    }
    else
    {
        num = -1;
    }
    return num;
}

int SIZE()
{
    return size;
}

int EMPTY()
{
    if(dq.empty() == true)
        return 1;
    else
        return 0;
}

int FRONT()
{
    if(dq.empty() == true)
        return -1;
    else
        return dq.front();
}

int BACK()
{
    if(dq.empty() == true)
        return -1;
    else
        return dq.back();
}



void CMDCheck(string s)
{
    int result = -2;
    //push_front x, push_back x, pop_front, pop_back
    if(s.size() >= 8)
    {
        if(s.size() <= 9) // pop_front, pop_back
        {
            result = POP(s.size());
        }
        else // push_front x, push_back x
        {
            string number = "";
            bool front = false;
            std::size_t found = s.find("front");
            // front or back
            if(found != std::string::npos) // push_front
            {
                for(int i=11; i < s.size(); i++)
                {
                    number += s[i];
                }
                front = true;
            }
            else
            {
                for(int i=10; i < s.size(); i++)
                {
                    number += s[i];
                }
                front = false;
            }
            PUSH(front, stoi(number));
        }
    }
    else
    {
        if(s == "size")
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
        else // back
        {
            result = BACK();
        }
    }

    if(result != -2)
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
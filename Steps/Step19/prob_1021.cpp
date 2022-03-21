#include <iostream>
#include <deque>

using std::cin;
using std::cout;
using std::deque;

deque<int> dq;
int counter = 0;

void FRONT(int time)
{
    int temp = 0;
    for(int i=0; i < time; i++)
    {
        temp = dq.front();
        dq.pop_front();
        dq.push_back(temp);
    }
    counter += time;
    dq.pop_front();
}

void BACK(int time)
{
    int temp = 0;
    for(int i=0; i < time; i++)
    {
        temp = dq.back();
        dq.pop_back();
        dq.push_front(temp);
    }
    counter += time;
    dq.pop_front();
}

int main()
{
    int n, m;
    cin >> n >> m;
    int num;

    for(int i=1; i<=n; i++)
    {
        dq.push_back(i);
    }

    for(int i=0; i < m; i++)
    {
        cin >> num;
        int index = 0;
        for(int i = 0; i < dq.size(); i++)
        {
            if(dq[i] == num)
            {
                index = i;
                break;
            }
        }
        if(index < dq.size() - index)
        {
            FRONT(index);
        }
        else
        {
            BACK(dq.size() - index);
        }
    }
    cout << counter;
}
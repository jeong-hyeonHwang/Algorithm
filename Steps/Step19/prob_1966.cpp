//2022.03.18
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::queue;
using std::vector;
using std::sort;

int main()
{
    int caseNum;
    cin >> caseNum;

    int n, m;
    int index = 0;
    int value = 0;
    for(int i=0; i < caseNum; i++)
    {
        queue<int> q;
        cin >> n >> m;
        index = m;

        int num;
        int* priorityArr = new int[n + 1];
        for(int j=0; j< n+1; j++)
        {
            priorityArr[j] = 0;
        }
        vector <int> priorityV;
        
        for(int j=0; j < n; j++)
        {
            cin >> num;
            priorityV.push_back(num);
            if(index == j)
                value = num;
            q.push(num);
        }

        sort(priorityV.begin(), priorityV.end());

        int pIndex = priorityV.size() - 1;
        
        int temp = 0;
        int count = 0;
        while(!(index == 0 && priorityV[pIndex] == value))
        {
            if(q.front() == priorityV[pIndex])
            {
                temp = q.front();
                q.pop();
                count += 1;
                pIndex -= 1;
                if(index > 0)
                    index -= 1;
            }
            else
            {
                temp = q.front();
                q.pop();
                q.push(temp);
                if(index > 0)
                    index -= 1;
                else
                    index = q.size() - 1;
            }
        }
        cout << count + 1 << '\n';
    }
}
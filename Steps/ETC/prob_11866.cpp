//2022.01.29
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num, eNum; // eNum: eraseNum
    cin >> num >> eNum;
    vector<int> jose(num, 0);
    bool* eraseIndex = new bool[num];

    int index = -1;
    int* eraseNum = new int[num];
    for(int i=0; i<num; i++)
    {
        eraseNum[i] = 0;
    }
    int t = 0;
    
    for(int k=0; k<num; k++)
    {
        jose[k] = k+1;
    }
    
    int limit = eNum == 1? num : num-1;
    while(t < limit)
    {
        index += eNum;
        if(index > jose.size() - 1)
        {
            //index = index%(jose.size()-1);
            index = index - (jose.size());
            int decrease = 0;
            for(int j=0; j < num; j++)
            {
                if(eraseIndex[j] == true)
                {
                    jose.erase(jose.begin() + j - decrease);
                    decrease += 1;
                    eraseIndex[j] = false;
                }
            }
        }
        if(index > jose.size()-1)
            index = index%jose.size();
        eraseIndex[index] = true;
        eraseNum[t] = jose[index];
        if(jose.size() == 2)
            jose.erase(jose.begin() + index);
        t++;

    }
    eraseNum[t] = jose[0];
    // NO PROBLEM AREA
    cout << "<";
    for(int j=0; j< num-1; j++)
    {
        cout << eraseNum[j] << ", ";
    }
    cout <<eraseNum[num-1]<< ">";
}
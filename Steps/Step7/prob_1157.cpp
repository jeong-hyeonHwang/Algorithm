//2022.01.04_2022.01.05
#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = 26;
    int* used = new int[len];
    for(int i =0; i <len; i++)
    {
        used[i] = 0;
    }
    
    int t;
    for(int j =0; j < str.size(); j++)
    {
        t = (int)(str[j] - 'A');
        used[t%32] += 1;
    }
    
    int max = 0;
    int num;
    bool sameNum = false;
    for(int i = 1; i < len; i++)
    {
        if(used[max] < used[i])
        {
            max = i;
            sameNum = false;
        }    
        else if(used[max] == used[i])
            sameNum = true;
    }
    if(!sameNum)
        cout << (char)(max + 65);
    else
        cout << "?";
}
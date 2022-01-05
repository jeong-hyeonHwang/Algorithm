//2022.01.04
#include <iostream>

using namespace std;

int main()
{
    string str;
    int len = 26;
    int* appearCheck = new int[len];
    cin >> str;
    for(int i =0; i <len; i++)
    {
        appearCheck[i] = -1; 
    }

    for(int i =0; i<str.size(); i++)
    {
        int t = str[i] - 'a';
        if(appearCheck[t] == -1)
        {
            appearCheck[t] = i;
        }
    }

    for(int i =0; i <len; i++)
    {
        cout << appearCheck[i] << " ";
    }
}
//2022.02.02
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int size = 5;
    string str[size];
    int len[size];
    int maxSize = 0;
    for(int i=0; i < size; i++)
    {
        cin >> str[i];
        len[i] = str[i].size();
        if(maxSize < len[i])
            maxSize = len[i];
    }

    int k =0;
    while(k != maxSize)
    {
        for(int i=0; i < size; i++)
        {
            if(k < len[i])
                cout << str[i][k];
        }
        k++;
    }
}
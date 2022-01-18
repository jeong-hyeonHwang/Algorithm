//2022.01.18
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string num;
    cin >> num;

    int* numArr = new int[num.length()];
    for(int i= 0; i < num.length(); i++)
    {
        numArr[i] = num[i] - '0';
    }

    for(int i = 0; i < num.length(); i++)
    {
        for(int j = i + 1; j < num.length(); j++)
        {
            if(numArr[i] < numArr[j])
            {
                std::swap(numArr[i], numArr[j]);
            }
        }
    }

    for(int i =0; i < num.length(); i++)
    {
        cout << numArr[i];
    }
}
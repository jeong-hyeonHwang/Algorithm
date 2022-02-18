//2022.02.18
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string s;
    cin >> s;
    int sum = 0;
    for(int i=0; i< s.size(); i++)
    {
        if(s[i] <= 90) // Capital
        {
            sum += s[i] -  38;  
        }
        else
        {
            sum += s[i] - 96;
        }
    }

    bool* arr = new bool[sum+1];
    int startPoint = 2;
    int num = 1;
    
    while(startPoint < sum)
    {
        for(int i=startPoint; i*num <= sum; num++)
        {
            if(arr[i*num] == 0)
            {
                arr[i*num] = 1;
            }
        }
        startPoint += 1;
        num = 1;
    }
    if(arr[sum] == 1)
        cout << "It is not a prime word.";
    else
        cout << "It is a prime word.";
}
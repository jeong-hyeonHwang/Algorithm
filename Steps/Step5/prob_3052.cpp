//2022.01.04
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 10> num;
    array<int, 42> leftNum;
    
    int left;
    
    for(int i=0; i < leftNum.size(); i++)
    {
        leftNum[i] = 0;
    }
    
    for(int i=0; i< num.size(); i++)
    {
        cin >> num[i];
    }
    
    for(int i =0; i < num.size(); i++)
    {
        left = num[i] % 42;
        leftNum[left] = 1;
    }
    int count = 0;
    for(int i = 0; i < leftNum.size(); i++)
    {
        if(leftNum[i] == 1)
        {
            count += 1;
        }
    }
    
    cout << count;
}
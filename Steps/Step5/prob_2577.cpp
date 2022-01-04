//2022.01.04
#include <iostream>
#include <cmath>
#include <array>
#include <string>

using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int num = a*b*c;
    
    array<int, 10> usedCount;
    for(int i = 0; i < usedCount.size(); i++)
    {
        usedCount[i] = 0;
    }
    int n = num;
    int t;
    
    while (n > 0)
    {
        
        t = n % 10;
        n = n / 10;
        for(int j = 0; j < usedCount.size(); j++)
        {
            if(t == j)
                usedCount[j] += 1;
        }
    }
    
    for(int i =0; i < usedCount.size(); i++)
    {
        cout << usedCount[i] << '\n';
    } 
}
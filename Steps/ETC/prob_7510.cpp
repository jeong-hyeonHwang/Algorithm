//2022.02.11
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::sort;

int Square(int num)
{
    return num*num;
}

int main()
{
    int caseN = 0;
    cin >> caseN;
    for(int i=0; i<caseN; i++)
    {
        int num[3];
        for(int j=0; j<3; j++)
        {
            cin >> num[j];
        }
        sort(num, num+3);
        cout << "Scenario #" << i+1 << ":\n";
        if((Square(num[0]) + Square(num[1])) == Square(num[2]))
        {
            cout << "yes\n\n";
        }
        else
            cout << "no\n\n";
    }
}
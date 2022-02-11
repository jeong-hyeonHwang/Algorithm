//2022.02.11
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int caseT = 0;
    cin >> caseT;
    int v = 0;
    int e = 0;
    for(int i=0; i<caseT; i++)
    {
        cin >> v >> e;
        cout << e-v+2 << '\n';
    }
}
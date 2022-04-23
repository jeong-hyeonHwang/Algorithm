//2022.04.24
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int caseT;
    cin >> caseT;
    int c, v;
    for(int i=0; i < caseT; i++)
    {
        cin >> c >> v;
        cout << "You get ";
        cout << c/v << " piece(s) and your dad gets ";
        cout << c%v << " piece(s).\n";
    }
}
//2022.03.30
#include <iostream>

using std::cin;
using std::cout;

int CaseNum(int n, int m)
{
    int count = 0;

    for(int i = 1; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if((i*i + j*j + m) % (i * j) == 0)
                count += 1;
        }
    }

    return count;
}
int main()
{
    int caseT;
    cin >> caseT;
    
    int n, m;
    for(int i= 0; i < caseT; i++)
    {
        cin >> n >> m;
        cout << CaseNum(n, m) << '\n';
    }
}
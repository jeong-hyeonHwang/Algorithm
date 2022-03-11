//2022.03.11
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main()
{
    int a, b;
    cin >> a >> b;

    int m;
    cin >> m;
    int* numA = new int[m];
    int num10 = 0;
    vector<int> numB;

    for(int i=0; i < m; i++)
    {
        cin >> numA[i];
    }

    int mul = 1;
    for(int i = m-1; i >= 0; i--)
    {
        num10 += numA[i] * mul;
        mul *= a;
    }

    while(num10 > 0)
    {
        numB.push_back(num10%b);
        num10 = num10/b;
    }

    for(int i = numB.size()-1; i >= 0; i--)
    {
        cout << numB[i] << ' ';
    }
}
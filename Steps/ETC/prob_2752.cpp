//2022.03.30
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::sort;

int main()
{
    int num[3] = {0};

    for(int i=0; i < 3; i++)
    {
        cin >> num[i];
    }

    sort(num, num+3);
    
    for(int i=0; i < 3; i++)
    {
        cout << num[i] << ' ';
    }
}

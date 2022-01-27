//2022.01.27
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::sort;

int main()
{
    int burger[3];
    int coke, cider;
    for(int i=0; i<3; i++)
    {
        cin >> burger[i];
    }

    cin >> coke >> cider;
    
    sort(burger, burger+3);
    int drink = coke > cider? cider : coke;
10
    cout << burger[0] + drink - 50;
}
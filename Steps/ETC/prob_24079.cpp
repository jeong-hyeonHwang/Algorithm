//2022.03.11
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    if((x+y)*60 >= z*60 + 30)
        cout << 0;
    else
        cout << 1;
}
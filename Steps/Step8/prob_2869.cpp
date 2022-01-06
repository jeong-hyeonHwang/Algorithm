//2022.01.06
#include <iostream>

using namespace std;

int main()
{
    long a, b, v;
    cin >> a >> b >> v;
    
    int day = (v-b)/(a-b);
    if((v-b)%(a-b) == 0)
    {
        cout << day;
    }
    else
    {
        cout << day + 1;
    }
}
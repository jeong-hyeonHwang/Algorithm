//2022.02.03
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string n;
    cin >> n;
    long long num = 0;
    int zeroIndex = 0;
    int len = n.size();
    for(int i=0; i<len; i++)
    {
        num += n[i] - '0';
    }
    
    sort(n.begin(), n.end());
    if(!(num%3 == 0 && n[0] == '0'))
    {
        cout << -1;
        return 0;
    }
    
    for(int i=len-1; i>=0; i--)
    {
        cout << n[i];
    }
}
//2022.01.08
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int result = 0;
    while(n >= 0)
    {
        if(n % 5 == 0)
        {
            result += n/5;
            cout << result;
            return 0;
        }
        n -= 3;
        result += 1;
    }

    cout << -1;
}
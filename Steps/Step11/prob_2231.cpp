//2022.01.13
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int result = 0;
    int num = 0;
    for(int i =1; i <n; i++)
    {
        num = i;
        result = i;
        while(num / 10 != 0)
        {
            result += num %10;
            num /= 10;
        }
        if(result == n)
        {
            cout << result;
            return 0;
        }
    }
    cout << 0;    
}
//2022.01.16
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    int num = 665;
    while(n != count)
    {
        num += 1;
        
        if(to_string(num).find("666") != string::npos)
        {
            count++;
        }
    }
    cout << num;
}
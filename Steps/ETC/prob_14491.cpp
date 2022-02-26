//2022.02.26
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int n;
    cin >> n;
    string num = "";

    while(n > 0)
    {
        num += (char)(n%9 + '0');
        n = n/9;
    }

    for(int i= num.size()-1; i >= 0; i--)
    {
        cout << num[i];
    }
}

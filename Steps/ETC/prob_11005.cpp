//2022.02.27
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    long long num;
    int nota;
    cin >> num >> nota;

    string numS = "";
    while(num > 0)
    {
        if(num%nota >= 10)
        {
            cout << num%nota << '\n';
            numS += (char)(num%nota + 55);
        }
        else
        {
            numS += (char)(num%nota + '0');
        }
        num = num/nota;
    }

    for(int i=numS.size()-1; i >= 0; i--)
    {
        cout << numS[i];
    }
}
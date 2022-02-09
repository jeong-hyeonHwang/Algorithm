//2022.02.09
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string num;
        cin >> num;
        if(num[num.size()-1]%2 == 0)
            cout << "even";
        else
            cout << "odd";
        cout << '\n';
    }
}
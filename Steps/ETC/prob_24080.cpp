//2022.05.09
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    int count[5] = {0};
    for(int i=0; i < n; i++)
    {
        count[s[i] - 'A'] += 1;
    }

    int total = 0;
    for(int i=0; i < 5; i++)
    {
        if(count[i] != 0)
            total += 1;
    }

    if(total >= 3)
        cout << "Yes";
    else
        cout << "No";
}
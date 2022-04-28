//2022.04.28
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    
    int count = 0;
    string s;
    while(count != n)
    {
        getline(cin, s);
        count += 1;
        cout << count << ". " << s << '\n';
    }
}
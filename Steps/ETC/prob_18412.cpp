//2022.05.11
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int n, a, b;
    string s;
    cin >> n >> a >> b;
    cin >> s;

    for(int i=1; i < a; i++) { cout << s[i-1]; }

    for(int i= b; i >= a; i--) { cout << s[i-1]; } 

    for(int i= b + 1; i < s.size() + 1; i++) { cout << s[i-1]; }
}
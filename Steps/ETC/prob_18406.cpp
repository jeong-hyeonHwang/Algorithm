//2022.05.01
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{

    string s;
    int n1 = 0;
    int n2 = 0;
    
    cin >> s;
    int middle = s.size()/2;
    
    for(int i =0; i <middle; i++)
    {
        n1 += (s[i] - '0');
    }
    for(int i =middle; i <s.size(); i++)
    {
        n2 += (s[i] - '0');
    }
    
    if(n1 == n2)
        cout << "LUCKY";
    else
        cout << "READY";
}
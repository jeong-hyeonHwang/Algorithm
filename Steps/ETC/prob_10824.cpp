//2022.02.14
#include <iostream>
#include <string>

using namespace std;

// int main()
// {
//     int a, b, c, d;
    
//     string n1;
//     string n2;
    
//     cin >> a >> b >> c >> d;
//     n1 = to_string(a) + to_string(b);
//     n2 = to_string(c) + to_string(d);

//     cout << stoll(n1) + stoll(n2);
// }

int main()
{
    string a, b, c, d;
    
    string n1;
    string n2;
    
    cin >> a >> b >> c >> d;
    n1 = a + b;
    n2 = c + d;

    cout << stoll(n1) + stoll(n2);
}
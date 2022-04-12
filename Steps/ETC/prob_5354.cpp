//2022.04.12
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

void Box(int n)
{
    string inside = "#";
    for(int t =0; t < n-2; t++) inside += "J";
    inside += "#";
    
    for(int t =0; t < n; t++) cout << '#';
    cout << '\n';
    for(int t =0; t < n-2; t++) cout << inside << '\n';
    for(int t =0; t < n; t++) cout << '#';
    cout << "\n\n";
}
int main()
{
    int caseT;
    cin >> caseT;

    int num;
    for(int i=0; i < caseT; i++)
    {
        cin >> num;
        if(num >= 2)
            Box(num);
        else
            cout << "#\n\n";
    }
}
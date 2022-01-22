//2022.01.22
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int t;
    cin >> t;
    string* strArr = new string[t];
    
    for(int i=0; i< t; i++)
    {
        cin >> strArr[i];
    }

    for(int i=0; i <t; i++)
    {
        int num = (strArr[i][0] - '0') + (strArr[i][2] - '0');
        cout << num << '\n';
    }
}
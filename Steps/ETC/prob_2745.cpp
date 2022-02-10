//2022.02.10
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string num;
    int calc = 0;
    long long result = 0;
    cin >> num >> calc;
    long long multi = 1;
    for(int i=num.size()-1; i >=0; i--)
    {
        if(num[i] >= 'A')    
            result += multi*(num[i] - 'A' + 10);
        else
            result += multi * (num[i] - '0');
        multi *= calc;
    }

    cout << result;
}
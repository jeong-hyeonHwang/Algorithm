//2022.02.14
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string day;
    cin >> day;
    char num = day[day.size()-1];
    char n;
    int result = 0;
    for(int i=0; i<5; i++)
    {
        cin >> n;
        if(num == n)
            result += 1;
    }

    cout <<result;
}
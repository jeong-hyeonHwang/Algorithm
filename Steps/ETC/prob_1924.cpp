//2022.01.26
#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::pair;

int main()
{
    string vip[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int monthDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month, day;
    cin >> month >> day;

    int count = 0;
    for(int i=0; i < month -1; i++)
    {
        count += monthDay[i];
    }
    count += day;
    cout << vip[count % 7];
}
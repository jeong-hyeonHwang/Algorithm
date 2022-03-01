//2022.03.01
#include <iostream>
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string current;
    string start;

    cin >> current >> start;

    int hour = ((current[0] - '0') * 10 + (current[1] - '0')) * 3600;
    int minute = ((current[3] - '0') * 10 + (current[4] - '0')) * 60;
    int second = (current[6] - '0') * 10 + current[7] - '0';
    
    long curTime = hour + minute + second;

    hour = ((start[0] - '0') * 10 + (start[1] - '0')) * 3600;
    minute = ((start[3] - '0') * 10 + (start[4] - '0')) * 60;
    second = (start[6] - '0') * 10 + start[7] - '0';

    long time = hour + minute + second;
    time = time + 86400;

    long result = time - curTime;
    if(result > 86400)
        result -= 86400;
    
    hour = result/3600;
    minute = (result%3600)/60;
    second = result%60;
    
    if(hour < 10)
        cout << 0;
    cout << hour << ':';
    if(minute < 10)
        cout << 0;
    cout << minute << ':';
    if(second < 10)
        cout << 0;
    cout << second;
}
//2022.04.09
#include <iostream>
#include <ctime>

using std::time_t;
using std::tm;
using std::time;
using std::localtime;
using std::cout;

int main()
{
    time_t t = time(0);
    tm* currentDate = std::localtime(&t);
    cout << currentDate -> tm_year + 1900 << '-';
    if(currentDate-> tm_mon < 10)
        cout << '0';
    cout << currentDate-> tm_mon + 1 << '-';
    if(currentDate -> tm_mday < 10)
        cout << '0';
    cout << currentDate-> tm_mday;
}
//2022.02.03
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int num;
    int area;
    cin >> num >> area;
    
    int peopleNum = num * area;

    int guess[5];
    for(int i=0; i< 5; i++)
    {
        cin >> guess[i];
    }
    for(int i=0; i< 5; i++)
    {
        cout << guess[i] - peopleNum << ' ';
    }
}
//2022.02.22
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    char grade[5];
    
    int front = 4;
    int back = 3;
    
    cin >> grade;
    
    if(grade[0] == 'F')
    {
        front = 0;
        back = 0;
    }
    else if(grade[0] != 'F')
    {
        front -= grade[0] - 'A';
        if(grade[1] == '0')
            back = 0;
        else if(grade[1] == '-')
        {
            front -= 1;
            back = 7;
        }
    }
    cout << front << '.' << back;
}
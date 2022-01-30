//2022.01.30
#include <iostream>

using std::cin;
using std::cout;

char StatusCheck(int c0)
{
    switch(c0)
    {
        case 0:
            return 'E';
        case 1:
            return 'A';
        case 2:
            return 'B';
        case 3:
            return 'C';
        case 4:
            return 'D';
    }
    return '0';
}   
int main()
{
    int size = 4;
    int yut[size];
    for(int i=0; i < 3; i++)
    {
        int count0 = 0;
        for(int j=0; j < size; j++)
        {
            cin >> yut[i];
            if(yut[i] == 0)
                count0 += 1;
        }
        cout << StatusCheck(count0)<< '\n';
    }
}
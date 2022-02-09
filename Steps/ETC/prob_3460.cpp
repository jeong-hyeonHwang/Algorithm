//2022.02.09
#include <iostream>

using std::cin;
using std::cout;

void WhereIsOne(int decimal)
{
    int count = 0;
    while(decimal != 0)
    {
        if(decimal%2 == 1)
            cout << count << ' ';
        decimal /= 2;
        count += 1; 
    }
    cout << '\n';
}

int main()
{
    int testC = 0;
    cin >> testC;
    int decimal = 0;
    
    for(int i=0; i< testC; i++)
    {
        cin >> decimal;
        WhereIsOne(decimal);
    }
}
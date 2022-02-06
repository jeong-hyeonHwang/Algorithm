//2022.02.06
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int caseN;
    cin >> caseN;
    int cuteCheck[2];
    for(int i=0; i<2; i++)
    {
        cuteCheck[i] = 0;
    }
    
    int check = 0;
    for(int i=0; i<caseN; i++)
    {
        cin >> check;
        cuteCheck[check] += 1;
    }
    
    if(cuteCheck[0] > cuteCheck[1])
        cout << "Junhee is not cute!";
    else
        cout << "Junhee is cute!";
}
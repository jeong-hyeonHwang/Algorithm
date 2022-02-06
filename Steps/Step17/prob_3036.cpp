//2022.02.06
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    cin >> n;
    int* ling = new int[n];
    for(int i=0; i <n; i++)
    {
        cin >> ling[i];
    }

    for(int i =1; i<n; i++)
    {
        int origin = ling[0];
        int devisor = ling[i];
        int temp = 0;
        while(origin%devisor != 0)
        {
            temp = devisor;
            devisor = origin%devisor;
            origin = temp;
            
        }
        cout << ling[0]/devisor << '/' << ling[i]/devisor << '\n';
    }
}
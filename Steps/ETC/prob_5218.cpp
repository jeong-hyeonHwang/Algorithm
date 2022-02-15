//2022.02.15
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int Absolute(char n1, char n2)
{
    return n1 > n2? 26-(int)(n1-n2) : n2-n1;
}

int main()
{
    int caseT = 0;
    cin >> caseT;
    for(int i=0; i<caseT; i++)
    {
        string a, b;
        cin >> a >>b;
        int* distances = new int[a.size()];
        for(int i=0; i<a.size(); i++)
        {
            distances[i] = Absolute(a[i],b[i]);
        }
        cout << "Distances: ";
        for(int i=0; i<a.size(); i++)
        {
            cout << distances[i] << ' ';
        }
        cout << '\n';
    }
}
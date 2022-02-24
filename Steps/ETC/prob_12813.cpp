//2022.02.24
#include <iostream>
#include <cstring>

#define SIZE 100001
using std::cin;
using std::cout;

int main()
{
    char a[SIZE];
    char b[SIZE];

    cin >> a >> b;
    for(int i=0; i < strlen(a); i++)
    {
        if(a[i] == '1' && b[i] == '1')
            cout << 1;
        else
            cout << 0;
    }
    cout << '\n';

    for(int i=0; i < strlen(a); i++)
    {
         if(a[i] == '1' || b[i] == '1')
            cout << 1;
        else
            cout << 0;
    }
    cout << '\n';

    for(int i=0; i < strlen(a); i++)
    {
        if(a[i] == '1' && b[i] == '1')
            cout << 0;
        else if(a[i] == '0' && b[i] == '0')
            cout << 0;
        else
            cout << 1;
    }
    cout << '\n';
    
    for(int i=0; i < strlen(a); i++)
    {
         if(a[i] == '1')
            cout << 0;
        else
            cout << 1;
    }
    cout << '\n';

    for(int i=0; i < strlen(b); i++)
    {
        if(b[i] == '1')
            cout << 0;
        else
            cout << 1;
    }
    cout << '\n';
}
//2022.03.13
#include <iostream>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string n;
    int m;
    cin >> n >> m;
    int index = 0;
    int count = 0;
    if(n.size() * stoi(n) > m)
    {
        while(count < m)
        {
            
            cout << n[index];
            if(index == n.size()-1)
                index = 0;
            else
                index += 1;
            count++;
        }
    }
    else
    {
        for(int i =0; i < stoi(n); i++)
            cout << n;
    }
}
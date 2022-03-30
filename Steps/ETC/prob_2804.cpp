//2022.03.30
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int aIndex = 0;
int bIndex = 0;

void IndexIs(string a, string b)
{
    for(int i=0; i < a.size(); i++)
    {
        for(int j =0; j < b.size(); j++)
        {
            if(a[i] == b[j])
            {
                aIndex = i;
                bIndex = j;
                return;
            }
        }
    }    
}
int main()
{
    string a;
    string b;
    cin >> a >> b;
    IndexIs(a, b);
    
    int index = 0;
    for(int i=0; i < b.size(); i++)
    {
        if(i == bIndex)
        {
            cout << a << '\n';
            index++;
            continue;
        }
        for(int j =0; j < a.size(); j++)
        {
            if(j == aIndex)
            {
                cout << b[index];
                index++;
            }
            else
                cout << '.';
        }
        cout << '\n';
    }
}
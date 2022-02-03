//2022.02.03
#include <iostream>

using std::cin;
using std::cout;
using std::string;

string whichCase(int n[])
{
    int num = 1;
    if(n[0] == 8)
    {
        for(int i=7; i >= 0; i--)
        {
            if(n[i] != num)
                return "mixed";
            num += 1;
        }
        return "descending";
    }
    else if(n[0] == 1)
    {
       for(int i=0; i < 8; i++)
        {
            if(n[i] != num)
                return "mixed";
            num += 1;
        }
        return "ascending";
    }
    else
        return "mixed";
}
int main()
{
    int num[8];
    for(int i=0; i < 8; i++)
    {
        cin >> num[i];
    }
    cout << whichCase(num);
}
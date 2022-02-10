//2022.02.10
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::to_string;

string RevCalc(string _x, string _y)
{
    string s1;
    string s2;
    
    for(int i=_x.size()-1; i >= 0; i--)
    {
        s1 += _x[i];
    }
    
    for(int i=_y.size()-1; i >= 0; i--)
    {
        s2 += _y[i];
    }
    int t = stoi(s1) + stoi(s2);
    return to_string(t);
}

void Rev(string s)
{
    bool zeroCheckComp = false;
    string result;
    
    for(int i=s.size()-1; i >= 0; i--)
    {
        result += s[i];
    }
    
    for(int i=0; i<result.size(); i++)
    {
        if(zeroCheckComp == true && result[i] == '0')
        {
            cout << result[i];
        }
        else if(result[i] != '0')
        {
            zeroCheckComp = true;
            cout << result[i];
        }
    }
}

int main()
{
    string x;
    string y;
    cin >>x >> y;
    Rev(RevCalc(x,y));
}
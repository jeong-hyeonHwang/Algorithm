//2022.01.08
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    int intA[10001];
    int intB[10001];

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for(int i =0; i<a.size(); i++)
    {
        intA[i] = a[i] - '0';
    }

    for(int i =0; i<b.size(); i++)
    {
        intB[i] = b[i] - '0';
    }
 
    int len;
    if(a.size() > b.size())
    {
        len = a.size();
    }
    else
    {
        len = b.size();
    }

    vector<int> result(len+1);

    int carry = 0;
    for(int i =0; i < len; i++)
    {
        int num = intA[i] + intB[i] + carry;
        carry = num/10;
        result[i] = num%10;
    }
    if(carry == 1)
    {
        result[len] = 1;
    }
    
    reverse(result.begin(), result.end());
    
    if(result[0] == 0)
    {
        result.erase(result.begin());
    }
    
    for(int i =0; i <result.size(); i++)
    {
        cout << result[i];
    }
}
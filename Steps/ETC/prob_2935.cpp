//2022.02.14
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

string n1;
string n2;
char s[101];
int k;

void Plus()
{
    int i= n1.size()-1;
    int j = n2.size()-1;
    k = 0;
    
    while(true)
    {
        int sum = 0;
        
        if(i < 0 && j < 0)
            break;
            
        if(i >= 0)
        {    
            sum += (n1[i] - '0');
            i--;
        }
        
        if(j >= 0)
        {
            sum += (n2[j] - '0');
            j--;
        }
        s[k] = sum + '0';
        k++;
        
    }
    k -= 1;
}

void Multiply()
{
    k = 0;
    
    int zeroCount = n1.size()-1 + n2.size()-1;
    for(int i=0; i<zeroCount; i++)
    {
        s[k] = '0';
        k++;
    }
    s[k] = '1';
}

int main()
{
    char op;
    cin >> n1 >> op >> n2;
    if(op == '+')
    {
        Plus();
    }
    else
    {
        Multiply();
    }

    for(; k>= 0; k--)
    {
        cout << s[k];
    }
}
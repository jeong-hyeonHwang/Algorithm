//2022.02.08
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

void StringAnalysis(string s)
{
    int sA = 0;
    int cA = 0;
    int n = 0;
    int b = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] != ' ')
        {
            if(s[i] >= '0' && s[i] <= '9') // number
            {
                n += 1;
            }
            else if(s[i] >= 'A' && s[i] <= 'Z') // capital
            {
                cA += 1;
            }
            else if(s[i] >= 'a' && s[i] <= 'z')
            {
                sA += 1;
            }
        }
        else
            b += 1;
    }
    
    if(sA + cA + n + b != 0)
        cout << sA << ' ' << cA << ' ' << n << ' ' << b << '\n';
}

int main()
{
    string str;
    // getline : 데이터를 읽을 수 있는 경우에는 0이 아닌 값을 반환
    // 데이터를 읽을 수 있다면 계속해서 돌아가는 반복문
    while(getline(cin, str)) // 주의!!!
    {
        StringAnalysis(str);
    }
}

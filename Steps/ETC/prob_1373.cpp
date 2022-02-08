//2022.02.08
//2진수 to 8진수로의 변환이 용이하도록 하기 위해
//s의 사이즈를 미리 3의 배수로 맞춰주면 편합니다
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

void change2to8(string s)
{
    while(s.size() % 3 != 0)
    {
        s.insert(0,"0");
    }
    
    for(int i=0; i<s.size();)
    {
        int n2 = 4*(s[i]-'0');
        int n1 = 2*(s[i+1]-'0');
        int n0 = 1*(s[i+2]-'0');
        
        cout << n2 + n1 + n0;
        i += 3;
    }
}

int main()
{
    string str;
    cin >> str;
    change2to8(str);
}
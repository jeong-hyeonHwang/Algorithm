//2022.02.02
// 16진수를 입력받은 후, 10진수로 바꾸는 연산은
// string의 0번째 인덱스가 아닌
// string.size()-1 -> 0 인덱스로 이루어짐을 명심하자
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int whichNum(char c)
{
    switch(c)
    {
        case 'A':
            return 10;
        case 'B':
            return 11;
        case 'C':
            return 12;
        case 'D':
            return 13;
        case 'E':
            return 14;
        case 'F':
            return 15;
        default :
            return c - '0';
    }
}
int main()
{
    string num16;
    cin >> num16;

    int multi = 1;
    int result = 0;
    for(int i=num16.size()-1; i >= 0; i--)
    { 
        result += multi * whichNum(num16[i]);
        multi *= 16;
    }

    cout << result;
}
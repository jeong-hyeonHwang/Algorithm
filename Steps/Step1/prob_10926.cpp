//2022.01.26
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string str;
    cin >> str;
    
    str += "?";
    str += "?!";
    
    // Available
    // str += "??";
    // str += "!";
    
    // Not Available
    //str += "??!";
    // ??! : c/c++ 컴파일러 설정에 따라 |로 인식할 수도 있음
    
    cout << str;
}
//2022.02.01
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int len = 8;
string odd = "F-F-F-F-";
string even = "-F-F-F-F";

int Compare(int n, string s)
{
    string compare = n%2 == 0? even : odd;
    int count = 0;
    for(int i=0; i < len; i++)
    {
        if(compare[i] == s[i])
            count += 1;
    }
    return count;
}

int main()
{
    string inputS;
    int result = 0;
    int lineN = 1;
    for(int i=0; i <len; i++)
    {
        cin >> inputS;
        result += Compare(lineN, inputS);
        lineN += 1;
    }
    cout << result;
}
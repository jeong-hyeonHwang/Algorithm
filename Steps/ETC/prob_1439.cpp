//2022.03.04
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string s;
    cin >> s;
    int index = 0;
    int count[2];
    for(int i=0; i < 2; i++)
    {
        count[i] = 0;
    }
    int count1 = 0;
    for(int i=0; i < s.size(); i++)
    {
        if(s[index] != s[i])
        {
            count[(s[index] - '0')] += 1;
            index = i;
        }
    }
    count[(s[index] - '0')] += 1;
    int result = count[0] > count[1]? count[1] : count[0];
    cout << result;
}
//2022.04.22
#include <iostream>
#include <string>

using namespace std;

int ZeroCount(int start, int end)
{
    string s = "";
    int count = 0;
    for(int t = start; t <= end; t++)
    {
        s = to_string(t);
        for(int k = 0; k < s.size(); k++)
        {
            if(s[k] == '0')
                count += 1;
        }
    }
    return count;
}

int main()
{
    int caseT;
    cin >> caseT;
    int n, m;

    for(int i=0; i < caseT; i++)
    {
        cin >> n >> m;
        cout << ZeroCount(n, m) << '\n';
    }
}
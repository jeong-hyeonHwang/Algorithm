//2022.02.27
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

void Result(string str, int i)
{
    cout << "String #" << i+1 << '\n';
    for(int i=0; i < str.size(); i++)
    {
        if(str[i] == 'Z')
            cout << 'A';
        else
            cout << (char)(str[i] + 1);
    }
    cout << "\n\n";
}
int main()
{
    int n;
    cin >> n;
    string s;
    for(int i=0; i <n; i++)
    {
        cin >> s;
        Result(s, i);
        
    }
}
//2022.05.14
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

void nameWithGod(string s)
{

    bool whiteSpace = false;
    cout << "god";
    for(int i=0; i < s.size(); i++)
    {
        if(whiteSpace == false && s[i] == ' ')
        {
            whiteSpace = true;
        }
        else if(whiteSpace == true && s[i] != ' ')
        {
            cout << s[i];
        }
    }
    cout << '\n';
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();

    string s;
    for(int i=0; i < n; i++)
    {
        getline(cin, s);
        nameWithGod(s);
    }
}
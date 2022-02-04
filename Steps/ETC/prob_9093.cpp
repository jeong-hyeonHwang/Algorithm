//2022.02.04
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

void Flip(string s)
{
    string flipWord;
    for(int j=0; j<=s.size(); j++)
    {
        if(s[j] != ' ' && j != s.size())
            flipWord += s[j];
        else
        {
            for(int k=flipWord.size()-1; k>=0; k--)
            {
                cout << flipWord[k];
            }
            flipWord = "";
            if(j != s.size())
                cout << s[j];
        }
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    cin.ignore();
    string str;
    for(int i=0; i< t; i++)
    {
        getline(cin, str);
        Flip(str);
        cout << '\n';
    }
}
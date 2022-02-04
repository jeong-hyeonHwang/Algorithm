//2022.02.04
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
int main()
{
    string str;
    string flipWord;
    getline(cin,str);
    int k =0;
    for(int i=0; i<=str.size(); i++)
    {
        if(str[i] == '<')
        {
            for(int j = flipWord.size()-1; j >= 0; j--)
            {
                cout << flipWord[j];
            }

            flipWord = "";
            k = i;
            while(str[k] != '>')
            {
                cout << str[k];
                k++;
            }
            i = k;
            cout << str[i];
        }
        else if(str[i] != ' ' && i != str.size())
        {
            flipWord += str[i];
        }
        else
        {
            for(int j= flipWord.size()-1; j >= 0; j--)
            {
                cout << flipWord[j];
            }
            flipWord = "";
            if(i != str.size())
                cout << str[i];
        }
    }
}
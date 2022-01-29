//2022.01.29
#include <iostream>

using std::cin;
using std::cout;
using std::string;

const int size = 101; // '\n' 포함해서 +1
char str[size];
int alphabet[26];

void UsedAlphabet(char str[])
{
    for(int i=0; i < size; i++)
    {
        if(str[i] == '\n')
            break;
        int index = str[i] - 'a';
        alphabet[index] += 1;
    }
}
int main()
{

    cin >> str;
    UsedAlphabet(str);
    for(int i=0; i < 26; i++)
    {
        cout << alphabet[i] << " ";
    }
}
//2022.01.06
#include <iostream>

using namespace std;

bool GroupWordNum(string s)
{
    int* alphabet = new int[26];
    for(int i =0; i < 26; i++)
    {
        alphabet[i] = 0;
    }
    for(int i =0; i < s.size(); i++)
    {
        int ascii = (int)(s[i] - 'a');
        if(alphabet[ascii] == 0)
        {
            alphabet[ascii] += 1;
            continue;
        }
        else
        {
            if(s[i] == s[i-1])
            {
                continue;
            }
            else
                return false;
        }
    }
    
    return true;
}

int main()
{
    int n;
    cin >> n;
    
    string* str = new string[n];
    
    for(int i =0; i<n; i++)
    {
        cin >> str[i];
    }
    
    int result = 0;
    for(int i =0; i<n; i++)
    {
        if(GroupWordNum(str[i]) == true)
            result += 1;
    }
    
    cout << result;
}
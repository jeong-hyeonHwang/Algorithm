//2022.02.26
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool IsAnagram(string s1, string s2)
{
    if(s1.size() != s2.size())
        return false;
        
    char* c1 = new char[s1.size()];
    char* c2 = new char[s2.size()];
    for(int i=0; i< s1.size(); i++)
    {
        c1[i] = s1[i];
        c2[i] = s2[i];
    }
    sort(c1, c1 + s1.size());
    sort(c2, c2 + s2.size());
    
    for(int i=0; i< s1.size(); i++)
    {
        if(c1[i] == c2[i])
            continue;
        else
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    string str1, str2;
    for(int i=0; i<n; i++)
    {
        cin >> str1 >> str2;
        if(IsAnagram(str1, str2) == true)
        {
            cout << str1 << " & " << str2 <<" are anagrams.\n";
        }
        else
        {
            cout << str1 << " & " << str2 <<" are NOT anagrams.\n";
        }
    }
}
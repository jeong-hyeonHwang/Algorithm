//2022.04.27
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::stoi;

bool availableRoom(int a)
{
    int count = 0;
    int nums[10] = {0};
    int temp = a;

    while(temp != 0)
    {
        nums[temp%10] += 1;
        temp = temp/10;
    }
    for(int t = 0; t < 10; t++)
    {
        if(!(nums[t] == 0 || nums[t] == 1))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    while(true)
    {
        getline(cin, s);
        if(s == "")
            break;
        
        string temp = "";
        int start = 0;
        int end = 0;
        for(int i=0; i <= s.size(); i++)
        {
            if(s[i] == ' ')
            {
                start = stoi(temp);
                temp = "";
            }
            if(i == s.size())
            {
                end = stoi(temp);
            }
            else
            {
                temp += s[i];
            }
        }
        
        int count = 0;
        for(int i =start; i <= end; i++)
        {
            if(availableRoom(i) == true)
            {
                count += 1;
            }
        }
        cout << count<<'\n';
    }
}
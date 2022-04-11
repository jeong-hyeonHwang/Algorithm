//2022.04.11
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::stoi;

string s;
char* result;
bool* check;
int min = 1000000;
void DFS(int index, int depth)
{
    if(depth == s.size())
    {
        string temp = "";
        for(int t =0; t < s.size(); t++)
        {
            temp += result[t];
        }
        int num = stoi(temp);
        
        if(min > num && num > stoi(s))
        {
            min = num;
        }
        return;
    }

    for(int i=0; i < s.size(); i++)
    {
        if(check[i] == false)
        {
            check[i] = true;
            result[depth] = s[i];
            DFS(index + 1, depth + 1);
            check[i] = false;
        }
    }
}
int main()
{
    cin >> s;
    result = new char[s.size()];
    check = new bool[s.size()];
    DFS(0,0);
    if(min == 1000000)
        cout << 0;
    else
        cout << min;
}

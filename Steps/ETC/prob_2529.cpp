//2022.03.29
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;


int k;
char arrow;
bool useCheck[10] = {false};
char* node;
char* arrows;

long max = 0;
long min = 9999999999;
string maxS = "";
string minS = "";

bool InEquSign(char sign, char a, char b)
{
    switch(sign)
    {
        case '>':
            return a > b? true : false;
        case '<':
            return a < b? true : false;
    }
    return false;
}

void DFS(int depth)
{
    if(depth == k + 1)
    {
        string str = "";
        for(int i=0; i < k; i++)
        {
            if(InEquSign(arrows[i], node[i], node[i+1]))
                str += node[i];
            else
            {
                return;
            }
        }
        
        str += node[k];
        long temp = stol(str);
        if(max < temp)
        {
            max = temp;
            maxS = str;
        }
        if(min > temp)
        {
            min = temp;
            minS = str;
        }
    }

    for(int i=0; i < 10; i++)
    {
        if(useCheck[i] == false)
        {
            useCheck[i] = true;
            node[depth] = i + '0';
            DFS(depth+1);
            useCheck[i] = false;
        }
    }
}
int main()
{
    cin >> k;
    arrows = new char[k];
    for(int i=0; i < k; i++)
    {
        cin >> arrows[i];
    }
    node = new char[k+1];
    DFS(0);
    cout << maxS << '\n' << minS;
}
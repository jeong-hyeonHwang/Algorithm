//2022.04.21
#include <iostream>
#include <map>
#include <string>

using std::cin;
using std::cout;
using std::map;
using std::make_pair;
using std::string;
using std::__cxx11::to_string;


int n, k;
int* arr;
int* temp;
bool* check;
map<string, int> m;

void DFS(int depth)
{
    if(k == depth)
    {
        string s = "";
        for(int j =0; j <depth; j++)
        {
            s += to_string(temp[j]);
        }
        if(m.find(s) == m.end())
        {
            m.insert(make_pair(s, 1));
        }
        return;
    }

    for(int i=0; i < n; i++)
    {
        if(check[i] == false)
        {
            check[i] = true;
            temp[depth] = arr[i];
            DFS(depth + 1);
            check[i] = false;
        }
    }
}
int main()
{
    cin >> n >> k;
    arr = new int[n];
    check = new bool[n];
    temp = new int[k];
    for(int i=0; i < n; i++)
    {
        cin >> arr[i];
    }
    DFS(0);
    cout << m.size();
}
//2022.03.28
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int* lotto;
vector<int> v;

void DFS(int startPoint, int depth)
{
    if(depth == 6)
    {
        for(int i = 0; i < 6; i++)
        {
            cout << lotto[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i=startPoint; i < v.size(); i++)
    {
        lotto[depth] = v[i];
        DFS(i+1, depth + 1);
    }
}
int main()
{
    int length;
    int num;
    while(true)
    {
        
        cin >> length;
        lotto = new int[6];
        if(length == 0)
            break;
            
        
        v.clear();
        lotto = new int[6];
        for(int i= 0; i < length; i++)
        {
            cin >> num; 
            v.push_back(num);
            
        }
        DFS(0, 0);
        cout << '\n';
    }
}
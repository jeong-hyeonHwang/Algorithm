//2022.04.02
#include <iostream>

using std::cin;
using std::cout;

int alphabet[4] = {1, 5, 10, 50};
long long num;
bool numCheck[50 * 20 + 1] = {false};
int count = 0;
int n;

void NumIs(int num)
{
    if(numCheck[num] == false)
    {
        numCheck[num] = true;
        count += 1;        
    }
}

void Find(int startPoint, int current, int depth)
{
    if(depth == n)
    {
        NumIs(current);
        return;
    }

    for(int i=startPoint; i < 4; i++)
    {
        Find(i, current + alphabet[i], depth + 1);
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    
    Find(0, 0, 0);
    cout << count;
}
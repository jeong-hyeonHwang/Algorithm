//2022.05.19
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n, m;
    cin >> n >> m;

    int* box = new int[n];
    bool key[2001] = {false};
    
    for(int i=0; i <n; i++)
    {
        cin >> box[i]; 
    }

    int num;
    for(int i = 0; i < m; i++)
    {   
        cin >> num;
        key[num] = true;
    }

    int count = 0;
    for(int i=0; i < n; i++)
    {
        if(key[box[i]] == true)
            count += 1;
    }

    cout << count;
}
//2022.01.10
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int triangle[3] = {0,0,0};
    cin >> triangle[0] >> triangle[1] >> triangle[2];
    while(triangle[0] != 0 && triangle[1] != 0 && triangle[2] != 0)
    {
        sort(triangle, triangle+3);
        if(triangle[0]*triangle[0] + triangle[1]*triangle[1] == triangle[2]*triangle[2])
            cout << "right" << '\n';
        else
            cout << "wrong" << '\n';
        cin >> triangle[0] >> triangle[1] >> triangle[2];
    }
}
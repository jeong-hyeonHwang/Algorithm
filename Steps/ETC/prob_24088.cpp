//2022.05.19
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int N, K;
    string S;
    cin >> N >> K >> S;

    int rw[2] = {0};
    for(int i=0; i < S.size(); i++)
    {
        if(S[i] == 'R')
        {
            rw[0] += 1;
        }
        else
        {
            rw[1] += 1;
        }
    }

    if(rw[0] == K)
        cout << 'W';
    else
        cout << 'R';
}
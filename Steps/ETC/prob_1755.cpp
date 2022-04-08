//2022.04.08
#include <iostream>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::string;
using std::map;
using std::make_pair;

int main()
{
    bool moreThan10 = false;
    string numS[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    map<string, int> m;
    int M, N;
    cin >> M >> N;

    string str = "";
    for(int i=M; i <= N; i++)
    {
        str = "";
        if(i < 10)
        {
            str = numS[i%10];
        }
        else
        {
            str = numS[i/10] + numS[i%10];
        }
        m.insert(make_pair(str, i));
    }

    std::map<string, int>::iterator it;
    int count = 0;
    for(it = m.begin(); it != m.end(); it++)
    {
        cout << it -> second << ' ';
        count += 1;
        if(count == 10)
        {
            cout << '\n';
            count = 0;
        }
    }
}
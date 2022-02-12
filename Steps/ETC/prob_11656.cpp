//2022.02.12
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::sort;

int main()
{
    string s;
    cin >> s;
    vector<string> sVector;

    for(int i=0; i<s.size(); i++)
    {
        string temp = s.substr(i, s.size());
        sVector.push_back(temp);
    }

    sort(sVector.begin(), sVector.end());
    for(int i=0; i<sVector.size(); i++)
    {
        cout << sVector[i] << '\n';
    }
}

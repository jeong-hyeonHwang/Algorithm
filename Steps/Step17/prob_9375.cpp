//2022.02.06, 2022.02.11
#include <iostream>
#include <map>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::map;
using std::make_pair;

int main()
{
    int caseNum;
    cin >> caseNum;
    int clothHave = 0;
    for(int i=0; i < caseNum; i++)
    {
        cin >> clothHave;

        string cName;
        string cKind;
        map<string, int> clothes;
        for(int j = 0; j < clothHave; j++)
        {
            cin >> cName >> cKind;
            if(clothes.find(cKind) != clothes.end())
            {
                clothes[cKind] += 1;
            }
            else
                clothes.insert(make_pair(cKind, 1));
        }
        
        map<string, int>::iterator it;

        int result = 1;
        for(it=clothes.begin(); it != clothes.end(); it++)
        {
            result = result *(it->second + 1);
        }
        result -= 1;
        cout << result << '\n';
    }
}
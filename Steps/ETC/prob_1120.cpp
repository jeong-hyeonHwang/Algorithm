//2022.03.24
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
    string a, b;
    vector<int> result;
    cin >> a >> b;


    int count = 0;
    for(int i=0; i <= b.size() - a.size(); i++)
    {
        count = 0;
        for(int j=0; j < a.size(); j++)
        {
            if(a[j] != b[i+j])
                count += 1;
        }
        result.push_back(count);
    }
    
    sort(result.begin(), result.end());
    
    cout << result[0];
}
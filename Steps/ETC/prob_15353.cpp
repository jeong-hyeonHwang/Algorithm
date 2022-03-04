//2022.03.04
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string a, b;
    cin >> a >> b;
    int aIndex = a.size() - 1;
    int bIndex = b.size() - 1;
    string result = "";
    int sum = 0;
    int flow = 0;
    while(true)
    {
        if(aIndex == -1 && bIndex == -1)
        {
            if(flow > 0)
                result += flow + '0';
            for(int i = result.size()-1; i >= 0; i--)
            {
                cout << result[i];
            }
            return 0;
        }
            
        sum = flow;
        if(aIndex >= 0)
        {
            sum += (a[aIndex] - '0');
            aIndex--;
        }

        if(bIndex >= 0)
        {
            sum += (b[bIndex] - '0');
            bIndex--;
        }

        result += (char)((sum%10) + '0');
        flow = sum/10;
    }
}
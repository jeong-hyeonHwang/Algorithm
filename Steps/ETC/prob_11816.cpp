//2022.02.21
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string num;
    cin >> num;
    int result = 0;
    int mul = 1;
    if(num[0] == '0' && num[1] == 'x')
    {
        for(int i= num.size()-1; i >= 2; i--)
        {
            
            if(num[i] <= '9')
                result = result + (num[i] - '0') * mul;
            else
            {
                result += (num[i] - 'a' + 10) * mul;
            }
            mul *= 16;
        }
        cout << result;
    }
    else if(num[0] == '0')
    {
        for(int i= num.size()-1; i >= 1; i--)
        {
            result += (num[i] - '0') * mul;
            mul *= 8;
        }
        cout << result;
    }
    else
        cout << num;
}

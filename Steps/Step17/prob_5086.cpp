//2022.02.03
#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::pair;

string WhichCase(int num1, int num2)
{
    if(num2 % num1 == 0) // 첫번째 숫자가 두번째 숫자의 약수라면
        return "factor\n";
    else if(num1 % num2 == 0) // 첫번째 숫자가 두번째 숫자의 배수라면
        return "multiple\n";
    else
        return "neither\n";
}
int main()
{
    pair<int, int> num;
    while(true)
    {
        cin >> num.first >> num.second;
        if(num.first == 0 && num.second == 0)
            return 0;
        cout << WhichCase(num.first, num.second);
    }
}

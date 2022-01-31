//2022.01.31
#include <iostream>

using std::cin;
using std::cout;

int nums[400];
int lLimit;
int uLimit;

void findSquare()
{
    int x = 1;
    int i = 0;
    while(true)
    {
        if((x*x) >= lLimit && (x*x) <= uLimit)
        {
            nums[i] = x*x;
            i++;
        }
        else if(x*x > uLimit)
            break;
        x++;
    }
}
int main()
{
    cin >> lLimit >> uLimit;
    findSquare();
    int count = 0;
    for(int i = 0; nums[i] != 0; i++)
    {
        count += nums[i];
    }
    if(nums[0] == 0)
    {
        cout << -1;
        return 0;
    }
    cout << count << '\n';
    cout << nums[0];
}
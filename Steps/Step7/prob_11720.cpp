//2022.01.04
#include <iostream>

using namespace std;

// string ver
int main()
{
    int n;
    cin >> n;

    string num;
    cin >> num;
    int result = 0;
    for(int i =0; i < num.size(); i++)
    {
        result += num[i] - '0';
    }
    
    cout << result;
}

// number ver
// int main()
// {
//     int n;
//     cin >> n;

//     long long num;
//     cin >> num;

//     int result = 0;
//     for(int i =0; i < n; i++)
//     {
//         result += num%10;
//         num = num/10;
//     }
    
//     cout << result;
// }


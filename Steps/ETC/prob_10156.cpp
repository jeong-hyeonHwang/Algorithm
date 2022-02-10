//2022.02.10
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int k =0;
    int n =0;
    int m =0;
    cin >> k >> n >> m;
    int result = k*n - m > 0 ? k*n-m : 0;
    cout << result;
}


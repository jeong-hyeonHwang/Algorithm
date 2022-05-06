//2022.05.07
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int l, a, b, c, d;
    cin >> l >> a >> b >> c >> d;
    
    int korean = a % c == 0? a/c : a/c + 1;
    int math = b % d == 0? b/d : b/d + 1;

    int result = korean > math ? l - korean : l - math;
    cout << result;
}
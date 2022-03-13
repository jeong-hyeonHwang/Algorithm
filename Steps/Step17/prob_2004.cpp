//2022.03.13
#include <iostream>

using std::cin;
using std::cout;

// ex) 25 12
    // n == 5
    // CountNum(25, 5) << 5 1
    // CountNum(12, 5) << 2
    // CountNum(13, 5) << 2
    // 6 - 2 - 2
    // n == 2
    // CountNum(25, 2) << 12 6 3 1
    // CountNum(12, 2) << 6 3 1
    // CountNum(13, 2) << 6 3 1
    // 22 - 10 - 10
int CountNum(long targetNum, long n)
{
    int count = 0;
    
    while(targetNum >= n)
    {
        targetNum = targetNum/n;
        count += targetNum;
    }
    return count;
}

int main()
{
    long n, m;
    cin >> n >> m;
    int result = 0;
    long count5 = 0;
    long count2 = 0;
    
    count5 = CountNum(n, 5) - CountNum(n-m, 5) - CountNum(m, 5);
    count2 = CountNum(n, 2) - CountNum(n-m, 2) - CountNum(m, 2);
    
    result = count5 > count2? count2 : count5;
    cout << result;
}
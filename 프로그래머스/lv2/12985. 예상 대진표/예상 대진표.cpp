#include <iostream>

using namespace std;

int divideBy2(int num) {
    if (num % 2 != 0) {
            return (num + 1) / 2;
        } else {
            return num / 2;
        }
}

int solution(int n, int a, int b)
{
    int answer = 1;

    int p1 = a < b ? a : b;
    int p2 = a < b ? b : a;
    while(true) {
        if (p1 == p2) {
            break;
        } else if (divideBy2(p1) == divideBy2(p2) && p2 - p1 == 1) {
            break;
        }
        
        p1 = divideBy2(p1);
        p2 = divideBy2(p2);
        answer += 1;
    }

    return answer;
}
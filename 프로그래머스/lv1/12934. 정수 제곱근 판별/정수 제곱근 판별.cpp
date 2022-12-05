#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long long targetSquareNum = 1;
    while(targetSquareNum * targetSquareNum <= n) {
        if (targetSquareNum * targetSquareNum == n) {
            long long num = targetSquareNum + 1;
            answer = num * num;
            break;
        }
        targetSquareNum += 1;
    }
    return answer;
}
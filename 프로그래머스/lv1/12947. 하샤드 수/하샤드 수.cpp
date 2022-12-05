#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int totalNum = 0;
    int targetNum = x;
    while(targetNum != 0) {
        totalNum += targetNum % 10;
        targetNum = targetNum / 10;
    }
    
    if (x % totalNum != 0) {
        answer = false;
    }
    return answer;
}
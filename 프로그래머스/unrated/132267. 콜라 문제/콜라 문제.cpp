#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    int leftAllCoke = n;
    int current = n;
    int cokeNum = 0;
    while(true) {
        if (current != 0) {
            current = leftAllCoke / a * b;
            answer += current;
            leftAllCoke = current + leftAllCoke % a;
        } else {
            break;
        }
    }
    
    return answer;
    
}
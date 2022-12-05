#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    if (b < a) {
        int temp = b;
        b = a;
        a = temp;
    }
    
    answer = a;
    
    for(int i = a + 1; i <= b; i++) {
        answer += i;
    }
    
    return answer;
}
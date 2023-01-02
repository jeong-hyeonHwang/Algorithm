#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    long long answer = 0;
    long long a = 0;
    long long b = 1;
    
    for(int i=2; i<=n; i++) {
        answer = (a + b) % 1234567;
        a = b % 1234567;
        b = answer % 1234567;
    }
    
    return answer;
}
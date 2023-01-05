#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    
    int limit = n/2;
    
    int temp = 0;
    for(int i=1; i<= limit; i++) {
        for(int j= i+1; j <= limit+1; j++) {
            temp = (j - i + 1) * (i + j) / 2;
            if (temp == n) {
                answer += 1;
                break;
            } else if (temp > n) {
                break;
            }
        }
    }
    
    return answer;
}
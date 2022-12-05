#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = -1;
    long currentNum = num;
    int count = 0;
    while(count < 500) {
        
        if (currentNum == 1) {
            answer = count;
            break;
        }
        
        if (currentNum % 2 == 0) {
            currentNum = currentNum / 2;
        } else {
            currentNum = (currentNum * 3) + 1;
        }
        
        
        count += 1;
        
    }
    
    return answer;
}
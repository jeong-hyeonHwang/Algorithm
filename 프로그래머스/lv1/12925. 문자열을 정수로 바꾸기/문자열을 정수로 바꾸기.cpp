#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int startIndex = (s[0] == '-' || s[0] == '+') ? 1 : 0;
    
    for(int i=startIndex; i< s.size(); i++) {
        
        int multiplyNum = (s.size() - i - 1);
        int targetNum = 1;
        
        for(int j=0; j< multiplyNum; j++) {
            targetNum *= 10;
        }
        
        answer += (s[i] - '0') * targetNum;
        
    }
    answer = s[0] == '-' ? -answer : answer;
    return answer;
}
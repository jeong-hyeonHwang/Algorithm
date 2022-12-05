#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<bool> isExist(10, false);
    
    for(int i=0; i< numbers.size(); i++) {
        isExist[numbers[i]] = true;
    }
    
    for(int i=0; i< isExist.size(); i++) {
        if (isExist[i] == false) {
            answer += i;
        }
    }
    return answer;
}
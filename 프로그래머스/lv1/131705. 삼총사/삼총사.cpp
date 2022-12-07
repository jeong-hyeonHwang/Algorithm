#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    sort(number.begin(), number.end());
    for(int i=0; i<number.size()-2; i++) {
        int left2Num = - number[i];
        for(int j=i+1; j < number.size()-1; j++) {
            int left1Num = left2Num - number[j];
            for(int k=j+1; k < number.size(); k++) {
                if (left1Num == number[k]) {
                    answer += 1;
                }
            }
        }
    }
    
    return answer;
}
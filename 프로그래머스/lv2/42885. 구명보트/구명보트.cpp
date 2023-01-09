#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    int len = people.size();
    int beginIndex = 0;
    int endIndex = people.size() - 1;
    
    sort(people.begin(), people.end());
    
    while(len != 0) {
        if (beginIndex != endIndex) {
         if(people[beginIndex] + people[endIndex] <= limit) {
             len -= 2;
             beginIndex += 1;
             endIndex -= 1;
             answer += 1;
         } else {
             len -= 1;
             endIndex -= 1;
             answer += 1;
         }
        } else {
            len -= 1;
            answer += 1;
        }
    }
    
    return answer;
}
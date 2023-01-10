#include <string>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    sort(tangerine.begin(), tangerine.end());
    int len = tangerine[tangerine.size()-1] + 1;
    vector<pair<int,int>> temp;
    
    for(int i=0; i< len; i++) {
        temp.push_back({0, i});
    }
    for(int i=0; i< tangerine.size(); i++) {
        temp[tangerine[i]].first += 1;
    }
    
    sort(temp.begin(), temp.end());
    
    int leftTangerine = k;
    for(int i= temp.size()-1; i > 0; i--) {
        if (temp[i].first >= leftTangerine) {
            answer += 1;
            break;
        } else {
            answer += 1;
            leftTangerine -= temp[i].first;
        }
    }
    return answer;
}
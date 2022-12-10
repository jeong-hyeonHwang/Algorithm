#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(), score.end(), greater<>());
    vector<vector<int>> v;
    
    int iterateFor = score.size() / m;
    for(int i=0; i < iterateFor; i++) {
        vector<int> temp;
        
        if (i * m + m > score.size()) {
            break;
        }
        for(int j = 0; j < m; j++) {
            temp.push_back(score[i*m + j]);
        }
        v.push_back(temp);
    }
    
    for(int i=0; i < v.size(); i++) {
        answer += (v[i][m-1] * m);
    }
    return answer;
}
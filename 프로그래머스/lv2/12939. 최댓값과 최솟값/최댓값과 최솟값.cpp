#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    vector<int> resultV; 
    bool minusValue = false;
    string target = "";
    
    for(int i=0; i<=s.size(); i++) {
        if (s[i] == ' ' || i == s.size()) {
            int num = stoi(target);
            resultV.push_back(minusValue ? -num : num);
            target = "";
            minusValue = false;
                
        } else if (s[i] == '-') {
            minusValue = true;
        } else {
            target += s[i];
        }
    }
    
    sort(resultV.begin(), resultV.end());
    answer += to_string(resultV[0]);
    answer += " ";
    answer += to_string(resultV[resultV.size() -1]);
    
    return answer;
}
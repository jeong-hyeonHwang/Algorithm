#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    vector<string> temp;
    for(int i=0; i < strings.size(); i++) {
        string str = strings[i][n] + strings[i];
        temp.push_back(str);
    }
    
    sort(temp.begin(), temp.end());
    
    for(int i=0; i< temp.size(); i++) {
        string s = temp[i].substr(1, temp[i].size());
        
        answer.push_back(s);
    }
    
    return answer;
}
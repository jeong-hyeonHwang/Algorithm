#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    vector<int> temp(n, 0);
    vector<string> wordList;
    char currentLastChar = words[0][0];
    for(int i=0; i< words.size(); i++) {
        int currentP = i % n;
        if ((find(wordList.begin(), wordList.end(), words[i]) == wordList.end()) && (currentLastChar == words[i][0])) {
            temp[currentP] += 1;
            wordList.push_back(words[i]);
            currentLastChar =  words[i].back();
        } else {
            answer.push_back(currentP + 1);
            answer.push_back(temp[currentP]+1);
            break;
        }
    }
    
    if (answer.size() == 0) {
        answer.push_back(0);
        answer.push_back(0);   
    }
    
    return answer;
}
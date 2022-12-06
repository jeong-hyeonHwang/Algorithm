#include <string>
#include <vector>
#include <regex>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for(int i=0; i< babbling.size(); i++) {
        string temp = babbling[i];
        temp = regex_replace(temp, regex("woo"), "1");
        temp = regex_replace(temp, regex("aya"), "1");
        temp = regex_replace(temp, regex("ye"), "1");
        temp = regex_replace(temp, regex("ma"), "1");
        
        if (temp.size() <= 4) {
            if (regex_replace(temp, regex("1"), "").size() == 0) {
             answer += 1;   
            }
        }
    }
    return answer;
}
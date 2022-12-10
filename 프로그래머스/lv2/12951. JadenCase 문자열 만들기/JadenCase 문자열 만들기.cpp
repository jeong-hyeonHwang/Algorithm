#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    if (s[0] > 'Z') {
        answer += s[0] - 32;
    } else {
        answer += s[0];
    }

    for(int i=1; i < s.size(); i++) {
        if (s[i] == ' ') {
            answer += ' ';
        }
        else if(s[i] <= '9') {
            answer += s[i];
        }
        else if (s[i] > 'Z') {
            if (s[i-1] == ' ') {
             answer += s[i] - 32;   
            } else {
                answer += s[i];
            }
        } else if (s[i] <= 'Z'){
            if(s[i-1] == ' ') {
                answer += s[i];
            } else {
                answer += s[i] + 32;
            }
        }
    }
    return answer;
}
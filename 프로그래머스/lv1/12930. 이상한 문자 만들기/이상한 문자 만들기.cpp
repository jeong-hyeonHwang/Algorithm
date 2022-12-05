#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int count = 0;
    for(int i=0; i<= s.size(); i++) {
        if (s[i] == ' ') {
            answer += " ";
            count = 0;
        } else if (i == s.size()) {
            count = 0;
        }
        else {
            if(count % 2 == 0) {
                if(int(s[i]) < 91) {
                    answer += s[i];
                } else {
                    answer += char(int(s[i]) - 32);
                }
            } else {
                if(int(s[i]) > 91) {
                    answer += char(s[i]);
                } else {
                    answer += char(s[i] + 32);
                }
            }
            count += 1;
        }
    }
    return answer;
}
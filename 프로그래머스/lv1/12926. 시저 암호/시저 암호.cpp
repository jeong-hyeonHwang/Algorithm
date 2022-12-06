#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    int leftNum = 0;
    for(int i=0; i< s.size(); i++) {
        if (s[i] == ' ') {
            answer += " ";
        } else if (s[i] <= 'Z') {
            answer += 'A' + (s[i] - 'A' + n) % 26;
        } else if (s[i] <= 'z') {
            answer += 'a' + (s[i] - 'a' + n) % 26;
        }
        
    }
    return answer;
}
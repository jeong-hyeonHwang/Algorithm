#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int index = s.size() / 2;
    
    if(s.size() % 2 == 0) {
        answer += s[index-1];
        answer += s[index]; 
    } else {
        answer = s[index];
    }
    
    return answer;
}
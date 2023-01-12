#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    queue<char> qOrigin;
    
    for(int i=0; i< s.size(); i++) {
        qOrigin.push(s[i]);
    }
    
    for(int i=0; i< s.size(); i++) {
        stack<char> temp;
        temp.push('a');
        queue<char> q = qOrigin;
        
        if (i != 0) {
            for(int j=0; j <i; j++) {
                char front = q.front();
                q.pop();
                q.push(front);
            }   
        }
        
        for(int j=0; j < s.size(); j++) {
            if (temp.top() == '[' && q.front() == ']') {
                temp.pop();
            } else if (temp.top() == '{' && q.front() == '}') {
                temp.pop();
            } else if (temp.top() == '(' && q.front() == ')') {
                temp.pop();
            } else {
                temp.push(q.front());
            }
            
            q.pop();
        }
        
        if (temp.size() == 1) {
            answer += 1;
        }
    }
    return answer;
}
#include<string>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = false;
    stack<char> st;

    for(int i=0; i < s.size(); i++) {
            
        char bracket = s[i];
        if (bracket == '(') {
            st.push(bracket);
        } else {
            if(!st.empty() && st.top() == '(') {
                st.pop();
            } else {
                st.push(bracket);
            }
        }
    }
        
    if (st.empty()) {
        answer = true;
    } else {
        answer = false;
    }
    
    return answer;
}
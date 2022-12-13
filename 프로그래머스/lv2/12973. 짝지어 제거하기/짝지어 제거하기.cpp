#include<string>
#include <stack>

using namespace std;

int solution(string s)
{
    int answer = -1;
    stack<char> st;
    
    for(int i=0; i < s.size(); i++) {
        char temp = s[i];
        if (st.empty() == true) {
            st.push(temp);
        } else {
            if (st.top() == temp) {
                st.pop();
            } else {
                st.push(temp);
            }
        }
    }
    
    if (st.empty()) {
        answer = 1;
    } else {
        answer = 0;
    }
    
    return answer;
}

#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    int size = p.size();
    int minusValue = size == 1 ? 0 : size-1;
    string temp = "";
    for(int i=0; i< t.size()-minusValue; i++) {
        temp = "";
        for(int j=0; j<size; j++) {
            temp += t[i+j];
        }
        if (stol(temp) <= stol(p)) {
            answer += 1;
        }
    }
    return answer;
}
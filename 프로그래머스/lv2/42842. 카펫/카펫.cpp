#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    brown -= 4;
    
    int a = 0;
    int b = 0;
    
    for(int i=1; brown - 2*i >1; i++) {
        a = i;
        b = (brown - 2*i) / 2;
        if (a * b == yellow) {
            if (a < b) {
                answer.push_back(b + 2);
                answer.push_back(a + 2);
            } else {
                answer.push_back(a + 2);
                answer.push_back(b + 2);
            }
            break;
        }
    }
    return answer;
}
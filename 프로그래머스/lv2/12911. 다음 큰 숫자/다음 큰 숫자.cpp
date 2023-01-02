#include <string>
#include <vector>

using namespace std;

int returnOneCount(int num) {
    string s = "";
    
    int oneCount = 0;
    while(num != 0) {
        if (num % 2 == 1) {
            s += "1";
            oneCount += 1;
        } else {
            s += "0";
        }
        num = num / 2;
    }
    
    return oneCount;
}

int solution(int n) {
    int answer = 0;
    
    int defaultCount = returnOneCount(n);
    while(true) {
        n += 1;
        if (defaultCount == returnOneCount(n)) {
            answer = n;
            break;
        }
    } 
    return answer;
}
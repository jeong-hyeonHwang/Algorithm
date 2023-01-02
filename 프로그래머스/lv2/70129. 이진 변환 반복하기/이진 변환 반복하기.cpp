#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string decToBi(int num) {
    string result = "";
     while(num != 0)
    {
        if (num % 2 == 1) {
            result += "1";   
        } else {
            result += "0";   
        }
        num /= 2;
    }
    reverse(result.begin(), result.end());
    return result;
}
vector<int> solution(string s) {
    vector<int> answer;
    
    int countZero = 0;
    int repeatNum = 0;
    
    string temp = s;
    while(true) {
        if (temp == "1") {
            answer.push_back(repeatNum);
            answer.push_back(countZero);
            break;
        } else {
            temp = "";
            for(int i=0; i < s.size(); i++) {
                if (s[i] == '0') {
                    countZero += 1;
                } else {
                    temp += '1';
                }
            }
            
            temp = decToBi(temp.size());
            s = temp;
            repeatNum += 1;
        }
    }
    return answer;
}
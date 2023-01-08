#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    string temp = "";
    for(int i=1; i<food.size(); i++) {
        for(int j=0; j < food[i]/2; j++) {
            temp += to_string(i);
        }
    }
    
    string temp2 = temp;
    reverse(temp2.begin(), temp2.end());
    answer = temp + "0" + temp2;
    return answer;
}
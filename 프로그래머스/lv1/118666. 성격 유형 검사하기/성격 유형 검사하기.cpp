#include <string>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    
    int scores[8] = {0,3,2,1,0,1,2,3};
    
    char typeList[] = {'R', 'T', 'C', 'F', 'J', 'M', 'A', 'N'};
    vector<int> v(8, 0);
    
    for(int i=0; i< survey.size(); i++) {
        if(choices[i] < 4) {
            int index = distance(typeList, find(typeList, typeList + 8, survey[i][0]));
            v[index] += scores[choices[i]];
        } else if (choices[i] > 4) {
            int index = distance(typeList, find(typeList, typeList + 8, survey[i][1]));
            v[index] += scores[choices[i]];
        }
    }
    
    vector<tuple<char, int>> temp;
    for(int i =0; i<v.size(); i+=2) {
        if (v[i] >= v[i + 1]) {
            temp.push_back({typeList[i], v[i]});
        } else {
            temp.push_back({typeList[i+1], v[i+1]});
        }
        
    }
    
    for(int i=0; i < temp.size(); i++) {
        answer += get<0>(temp[i]);
    }
    
    return answer;
}
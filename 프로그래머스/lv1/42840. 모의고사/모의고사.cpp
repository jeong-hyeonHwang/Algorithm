#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> person1 = {1,2,3,4,5};
    vector<int> person2 = {2,1,2,3,2,4,2,5};
    vector<int> person3 = {3,3,1,1,2,2,4,4,5,5};
    
    vector<tuple<int,int>> counter = {make_tuple(0,1),make_tuple(0,2),make_tuple(0,3)};
    for(int i=0; i< answers.size(); i++) {
        if (person1[i%person1.size()] == answers[i]) {
            get<0>(counter[0]) += 1;
        }
        
        if (person2[i%person2.size()] == answers[i]) {
            get<0>(counter[1]) += 1;
        }
        
        if (person3[i%person3.size()] == answers[i]) {
            get<0>(counter[2]) += 1;
        }
    }
    
    sort(counter.begin(), counter.end(), greater<>());
    for(int i=0; i< counter.size(); i++) {
        cout << get<0>(counter[i]) << ' ' << get<1>(counter[i]) << '\n';
    }
    
    answer.push_back(get<1>(counter[0]));
    if (get<0>(counter[0]) == get<0>(counter[1])) {
        answer.push_back(get<1>(counter[1]));
      if (get<0>(counter[1]) == get<0>(counter[2])) {
          answer.push_back(get<1>(counter[2]));
      }
    } 
    
    sort(answer.begin(), answer.end());
    return answer;
}
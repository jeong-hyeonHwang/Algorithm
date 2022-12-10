#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(tuple<double, int> v1, tuple<double, int> v2)
{
    if (get<0>(v1) == get<0>(v2)) {
     return get<1>(v1) < get<1>(v2);   
    } else {
        return get<0>(v1) > get<0>(v2);
    }
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    
    stable_sort(stages.begin(), stages.end());
    vector<tuple<double,int>> temp;
    for(int i=1; i <=N; i++) {
        int numerator = count(stages.begin(), stages.end(), i);
        int denominator =  stages.size() - int(lower_bound(stages.begin(), stages.end(), i) - stages.begin());
        if (denominator == 0) { denominator = 1; }
        temp.push_back({numerator/double(denominator), i});
    }
    
    sort(temp.begin(), temp.end(), compare);
    
    for(int i=0; i < temp.size(); i++) {
        answer.push_back(get<1>(temp[i]));
    }
    return answer;
}
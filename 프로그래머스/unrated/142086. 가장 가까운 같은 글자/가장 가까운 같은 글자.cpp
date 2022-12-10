#include <string>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;


bool compare(tuple<char, int, int> v1, tuple<char, int, int> v2)
{
    return get<1>(v1) < get<1>(v2);
}


vector<int> solution(string s) {
    vector<int> answer;
    
    vector<tuple<char, int, int>> charNIndex;
    for(int i=0; i< s.size(); i++) {
        charNIndex.push_back({s[i], i, -1});
    }
    sort(charNIndex.begin(), charNIndex.end());
    
    for(int i =1; i < charNIndex.size(); i++) {
        if (get<0>(charNIndex[i]) == get<0>(charNIndex[i-1])) {
            get<2>(charNIndex[i]) = get<1>(charNIndex[i]) - get<1>(charNIndex[i-1]);
        }
    }
    
    sort(charNIndex.begin(), charNIndex.end(), compare);
    
    for(int i=0; i< charNIndex.size(); i++) {
        answer.push_back(get<2>(charNIndex[i]));
    }
    return answer;
}
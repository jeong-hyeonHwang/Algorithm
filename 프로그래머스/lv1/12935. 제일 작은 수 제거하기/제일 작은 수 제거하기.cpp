#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> sortedArr = arr;
    
    if (arr.size() == 1) {
        answer.push_back(-1);
    } else {
        sort(sortedArr.begin(), sortedArr.end(), greater<>());
        int minNum = sortedArr[arr.size() -1];
        bool removed = false;
        for(int i=0; i<arr.size(); i++) {
            if (minNum == arr[i] && removed == false) {
                removed = true;
            } else {
                answer.push_back(arr[i]);
            }
        }
    }
    
    return answer;
}
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<bool> decimalList() {
    int len = 1000 + 999 + 998 + 1;
    vector<bool> isDecimal(len, true);
    
    for(int i =2; i < sqrt(len); i++) {
        if (isDecimal[i] == true) {
            for(int j = i+i; j <= len; j+=i) {
                isDecimal[j] = false;
            }
        }
    }
    
    return isDecimal;
}

int solution(vector<int> nums) {
    int answer = -1;

    sort(nums.begin(), nums.end());
    
    vector<bool> isDecimal = decimalList();
    
    vector<bool> decimals = {};
    for(int i=0; i < nums.size()-2; i++) {
        for(int j= i+1; j < nums.size()-1; j++) {
            for(int k = j+1; k < nums.size(); k++) {
                int num = nums[i] + nums[j] + nums[k];
                if (isDecimal[num] == true) {
                    if (find(decimals.begin(), decimals.end(), num) == decimals.end()) {
                    decimals.push_back(num);    
                    }
                }
            }
        }
    }
    
    answer = decimals.size();
    return answer;
}
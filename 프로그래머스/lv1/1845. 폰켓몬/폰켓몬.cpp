#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    
    int limitNum = nums.size() / 2;
    
    vector<int> temp;
    sort(nums.begin(), nums.end());
    for(int i=0; i< nums.size(); i++) {
        if(find(temp.begin(), temp.end(), nums[i]) == temp.end() && temp.size() < limitNum) {
            temp.push_back(nums[i]);
        }
    }
    
    answer = temp.size();
    
    return answer;
}
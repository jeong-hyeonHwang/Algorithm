#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    int currentNum = 1000001;
    vector<int> answer;
    for(int i=0; i< arr.size(); i++) {
        if(arr[i] != currentNum) {
            currentNum = arr[i];
            answer.push_back(arr[i]);
        }
    }
    
    return answer;
}
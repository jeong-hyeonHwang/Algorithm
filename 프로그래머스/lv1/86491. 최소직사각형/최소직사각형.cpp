#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    int maxW = 0;
    int maxH = 0;
    
    for(int i=0; i< sizes.size(); i++) {
        if(sizes[i][0] > sizes[i][1]) {
            int temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
        
        if (maxW < sizes[i][0]) {
            maxW = sizes[i][0];
        }
        
        if (maxH < sizes[i][1]) {
            maxH = sizes[i][1];
        }
        
    }
    
    answer = maxW * maxH;
    return answer;
}
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
        int answer = 0;
    
    sort(d.begin(), d.end());
    
    int budgetCount = 0;
    int count = 0;
    
    for(int i=0; i < d.size(); i++) {
        budgetCount += d[count];
        if(budgetCount <= budget) {
            count += 1;
        } else if ( budgetCount == budget) {
            count -= 1;
            break;
        }else {
            break;
        }
    }
    
    answer = count;
    return answer;
}
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<bool> decimalList(int maxNum) {
    vector<bool> isDecimal(maxNum+1, true);
    
    for(int i=2; i <= sqrt(maxNum); i++) {
        if (isDecimal[i] == true) {
            for(int j= i+i; j <= maxNum; j+=i)
            {
                isDecimal[j] = false;
            }
        }
    }
    
    return isDecimal;
}

int solution(int n) {
    int answer = 0;
    
    vector<bool> decimals = decimalList(n);
    answer = count(decimals.begin() + 2, decimals.end(), true);
    return answer;
}
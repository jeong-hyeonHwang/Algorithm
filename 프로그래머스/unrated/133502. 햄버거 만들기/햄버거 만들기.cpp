#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    
    int i = 0;
    int currentSize = ingredient.size();
    while(currentSize >= 4 && i <= currentSize - 4) {
        int num = ingredient[i] * 1000 + ingredient[i+1] * 100 + ingredient[i+2] * 10 + ingredient[i+3];
        if (num == 1231) {
            ingredient.erase(ingredient.begin() + i, ingredient.begin() + i+4);
            answer += 1;
            i = 0;
            currentSize = ingredient.size();
        } else {
            i += 1;
        }
    }
    return answer;
}
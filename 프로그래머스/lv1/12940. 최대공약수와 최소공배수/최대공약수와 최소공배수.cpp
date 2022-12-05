#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    int target = a % b;
    
    while(target > 0) {
        a = b;
        b = target;
        target = a % b;
    }
    
    return b;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
vector<int> solution(int n, int m) {
    vector<int> answer;
    
    answer.push_back(gcd(n, m));
    answer.push_back(lcm(n, m));
    return answer;
}
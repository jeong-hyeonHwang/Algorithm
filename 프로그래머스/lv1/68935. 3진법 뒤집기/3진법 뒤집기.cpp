#include <string>
#include <vector>
#include <cmath>

using namespace std;


long three(long n) {
    string s = "";
    while(n != 0) {
        s += to_string(n % 3);
        n = n / 3;
    }
    return stol(s);
}

long threeToTen(long n) {
    int result = 0;
    int threeCount = 0;
    while(n != 0) {
        result += n % 10 * pow(3, threeCount);
        n = n/10;
        threeCount += 1;
    }
    
    return result;
}

int solution(int n) {
    int answer = 0;
    answer = threeToTen(three(n));
    return answer;
}
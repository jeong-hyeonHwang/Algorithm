#include <string>
#include <vector>

using namespace std;

string returnDay(int n) {
    if (n == 0) {
        return "THU"; 
    } else if (n == 1) {
        return "FRI";
    } else if (n == 2) {
         return "SAT";
    } else if (n == 3) {
         return "SUN";
    } else if (n == 4) {
         return "MON";
    } else if (n == 5) {
         return "TUE";
    } else if (n == 6) {
         return "WED";
    }
}
string solution(int a, int b) {
    string answer = "";
    vector<int> months = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int monthDayCount = 0;
    for(int i =0; i < a-1; i++) {
        monthDayCount += months[i];
    }
    monthDayCount += b;
    answer = returnDay(monthDayCount % 7);
    return answer;
    
}
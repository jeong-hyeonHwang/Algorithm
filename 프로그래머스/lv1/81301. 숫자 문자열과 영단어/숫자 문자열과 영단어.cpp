#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(string s) {
    int answer = 0;
    string temp = s;
    temp = regex_replace(temp, regex("zero"), "0");
    temp = regex_replace(temp, regex("one"), "1");
    temp = regex_replace(temp, regex("two"), "2");
    temp = regex_replace(temp, regex("three"), "3");
    temp = regex_replace(temp, regex("four"), "4");
    temp = regex_replace(temp, regex("five"), "5");
    temp = regex_replace(temp, regex("six"), "6");
    temp = regex_replace(temp, regex("seven"), "7");
    temp = regex_replace(temp, regex("eight"), "8");
    temp = regex_replace(temp, regex("nine"), "9");
    
    answer = stoi(temp);
    
    return answer;
}
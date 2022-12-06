#include <string>
#include <vector>
#include <iostream>

using namespace std;

string decToBi(int num, int n) {
    string result = "";
    for(int i=n-1; i >= 0; --i) {
        result += to_string(num >> i & 1);
    }
    return result;
 }

string compareBinary(string n1, string n2) {
    string result = "";
    for(int i=0; i < n1.size(); i++) {
        if ((n1[i] == '1') || (n2[i] == '1')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i=0; i< n; i++) {
        string num1 =  decToBi(arr1[i], n);
        string num2 =  decToBi(arr2[i], n);
        
        string resultBinary = compareBinary(num1, num2);
        
        string result = "";
        for(int i=0; i< resultBinary.size(); i++) {
            if(resultBinary[i] == '1') {
                result += "#";
            } else {
                result += " ";
            }
        }
        
        answer.push_back(result);
        
    }
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    cout << commands[0][0] << ' ' << commands[0][1] << ' ' << commands[0][2] << endl;
    for(int i=0; i < commands.size(); i++) {
        vector<int> temp;
        for(int j = commands[i][0] - 1; j <= commands[i][1] - 1; j++) {
            temp.push_back(array[j]);
        }
        sort(temp.begin(), temp.end());
        int index = commands[i][2] - 1;
        answer.push_back(temp[index]);
    }
    
    return answer;
}
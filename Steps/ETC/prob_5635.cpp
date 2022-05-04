//2022.05.05
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::pair;
using std::sort;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> student;
    vector<string> studentName;
    
    string sName;
    string day, month, year;
    for(int i=0; i < n; i++)
    {
        
        cin >> sName;
        studentName.push_back(sName);
        cin >> day >> month >> year;
        string monthTemp = month.size() == 1 ? "0" + month : month;
        string dayTemp = day.size() == 1 ? "0" + day : day;
        string temp = year + monthTemp + dayTemp;
        student.push_back(pair<int, int>(stoi(temp), i));
    }
    
    sort(student.begin(), student.end());
    cout << studentName[student[student.size() - 1].second] << '\n';
    cout << studentName[student[0].second];
}
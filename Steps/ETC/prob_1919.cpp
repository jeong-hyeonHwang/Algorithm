//2022.05.13
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string a, b;
    cin >> a >> b;

    int alphabetA[26] = {0};
    int alphabetB[26] = {0};

    for(int i=0; i < a.size(); i++)
    {
        alphabetA[a[i] - 'a'] += 1;
    }
    
    for(int i=0; i < b.size(); i++)
    {
        alphabetB[b[i] - 'a'] += 1;
    }

    int count = 0;
    for(int i=0; i < 26; i++)
    {
        int num = 0;
        num = alphabetA[i] > alphabetB[i] ? alphabetA[i] - alphabetB[i] : alphabetB[i] - alphabetA[i];
        count += num;
    }
    cout << count;
}
//2022.01.05
#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin,str);

    int count = 1;
    for(int i =0; i < str.size(); i++)
    {
        if(str[i] == ' ')
        {
            if(i != 0 && i != str.size() - 1)
                count++;
        }
    }

    // str를 공백 단 하나를 입력받는 경우도 고려
    if(str.size() == 1 && str[0] == ' ')
        count = 0;
    cout << count;
}
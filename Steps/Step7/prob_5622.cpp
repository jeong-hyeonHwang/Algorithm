//2022.01.05
#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int result = 0;
    int sum;
    for(int i=0; i<str.size(); i++)
    {
        sum = 2;
        int num = (int)str[i];
        if(num >= 65)
        {
            sum+=1;
            if(num >= 68)
            {
                sum+=1;
                if(num >= 71)
                {
                    sum+=1;
                    if(num >= 74)
                    {
                        sum+=1;
                        if(num >= 77)
                        {
                            sum+=1;
                            if(num >= 80)
                            {
                                sum+=1;
                                if(num >= 84)
                                {
                                    sum+=1;
                                    if(num >= 87)
                                        sum+=1;
                                }
                            }
                                
                        }
                    }
                }
            }
        }
        result += sum;
    }
    cout << result;
}
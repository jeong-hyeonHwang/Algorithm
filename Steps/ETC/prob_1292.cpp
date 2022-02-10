//2022.02.10
#include <iostream>

using std::cin;
using std::cout;
int main()
{
    int start = 0;
    int end = 0;
    cin >> start >> end;

    int currentNum = 1;
    int reNum = 1;
    int result = 0;

    for(int i=0; i<start-1; i++)
    {   
        if(reNum == currentNum)
        {
            
            if(i != start-1)
            {    reNum = 1;
                currentNum += 1;
            }
        }
        else
            reNum += 1;
    }
    
    for(int i=start; i<= end; i++)
    {
        result += currentNum;
        if(reNum == currentNum)
        {
            reNum = 0;
            currentNum += 1;
        }
        reNum += 1;
    }
    cout << result;
}
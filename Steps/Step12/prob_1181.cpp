//2022.01.21
#include <iostream>

using std::cin;
using std::cout;
using std::string;

void mS(string exist[], int left, int right, string temp[])
{
    if(left >= right)
        return;
        
    int middle = (left+right)/2;
    
    mS(exist, left, middle, temp);
    mS(exist, middle+1, right, temp);
    
    int i = left;
    int j = middle+1;
    int k = left; // for temp arr setup
    
    while(k <= right)
    {
        
        if(i > middle) // 나뉜 정렬 범위 이상의 인덱스에 해당하는 케이스 1
        {
            temp[k] = exist[j];
            j+= 1;
        }
        else if( j > right) // 나뉜 정렬 범위 이상의 인덱스에 해당하는 케이스 2
        {
            temp[k] = exist[i];
            i += 1;
        }
        else if(exist[i].length() < exist[j].length())
        {
            temp[k] = exist[i];
            i += 1;
        }
        else if(exist[i].length() > exist[j].length())
        {
            temp[k] = exist[j];
            j += 1;
        }
        else if(exist[i].length() == exist[j].length())
        {
            if(exist[i] != exist[j])
            {
                for(int t = 0; t < exist[i].length(); t++)
                {
                    if((int)exist[i][t] < (int)exist[j][t])
                    {
                        temp[k] = exist[i];
                        i += 1;
                        break;
                    }
                    else if((int)exist[i][t] > (int)exist[j][t])
                    {
                        temp[k] = exist[j];
                        j += 1;
                        break;
                    }
                }
            }
            else
            {
                temp[k] = exist[j];
                j += 1;
            }
        }
        
        k++;
    }
    
    for(int t = left; t <= right; t++)
    {
        exist[t] = temp[t];
    }
}

int main()
{
    int n;
    cin >> n;
    string* strArr = new string[n];
    string* temp = new string[n];
    
    for(int i =0; i <n; i++)
    {
        cin >> strArr[i];
    }
    
    mS(strArr, 0, n-1, temp);

    for(int i=0; i<n; i++)
    {
        if(strArr[i] != strArr[i+1])
        {
            cout << strArr[i] << '\n';
        }
    }
}
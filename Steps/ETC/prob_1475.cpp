//2022.02.05
// 6과 9를 동일하게 취급
// 9를 입력받은 경우도 numUsed[6]의 인덱스를 증가시키기
// 이후에 numUsed[6]의 홀짝 판별 후 /2 혹은 /2) +1 작업
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int size = 9;
    int numUsed[size];
    
    for(int i=0; i < size; i++)
    {
        numUsed[i] = 0;
    }
    string number;
    cin >> number;
    for(int i=0; i < number.size(); i++)
    {
        if(number[i]-'0' != 9)
            numUsed[(number[i] - '0')] += 1;
        else
            numUsed[6] += 1;
    }
    
    // 변환 과정이 궁금하다면 주석 제거
    // for(int i=0; i < size; i++)
    // {
    //     cout << "numUsed[" << i << "] = " << numUsed[i] <<'\n';
    // }
    
    if(numUsed[6]%2 == 0)
    {
        numUsed[6] /= 2;
    }
    else
    {
        numUsed[6] = numUsed[6]/2 + 1;
    }
    
    // 변환 과정이 궁금하다면 주석 제거
    // for(int i=0; i < size; i++)
    // {
    //     cout << "numUsed[" << i << "] = " << numUsed[i] <<'\n';
    // }
    
    for(int i=0; i < size; i++)
    {
        cout << "numUsed[" << i << "] = " << numUsed[i] <<'\n';
    }

    int maxIndex = 0;
    for(int i=1; i < size; i++)
    {
        if(numUsed[i] >= numUsed[maxIndex])
        {
            maxIndex = i;
        }
    }

    cout << numUsed[maxIndex];
}
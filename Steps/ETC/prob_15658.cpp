//2022.03.23
//prob_14888 개선
#include <iostream>

using std::cin;
using std::cout;

int n;
int* A;
int op[4]; // + - * /
int t = 0;
int* opArr;

long long max = -1000000000;
long long min = 1000000000;

// op에 따라 n1과 n2를 대상으로 수행할 계산을 지정
long long Calculate(int op, int n1, int n2)
{
    long long result = 0;
    switch (op)
    {
        case 0:
            result = n1 + n2;
            break;
        case 1:
            result = n1 - n2;
            break;
        case 2:
            result = n1 * n2;
            break;
        case 3:
            result = n1 / n2;
            break;
    }
    return result;
}

void DFS(int startIndex, int depth)
{
    // 모든 연산자를 배정한 경우, 해당 결과에 따라 처음부터 연산
    // 계산한 결과값 > max -> max 갱신
    // 계산한 결과값 < min -> min 갱신
    if(depth == n-1)
    {
        long long temp = A[0];
        for(int i=0; i < n-1; i++)
        {
            temp = Calculate(opArr[i], temp, A[i+1]);
        }
        
        if(max < temp)
            max = temp;
        if (min > temp)
            min = temp;
        return;
    }


    int range = 4;
    for(int i = 0; i < range; i++)
    {
        if(op[i] != 0)
        {
            op[i] -= 1;
            opArr[t++] = i;
            DFS(t, depth+1);
            op[i] += 1;
            t--;
        }
    }
}

int main()
{
    cin >> n; // 입력: 수의 개수
    A = new int[n]; // 입력받은 수들를 저정할 배열
    opArr = new int[n-1]; // 연산자의 개수를 저장할 배열

    // 입력: 연산 대상이 되는 숫자들
    for(int i =0; i < n; i++)
    {
        cin >> A[i];
    }

    // 입력: 연산자 각각의 개수
    for(int i = 0; i < 4; i++)
    {
        cin >> op[i];
    }

    t = 0; 
    DFS(0, 0);
    
    cout << max << '\n' << min;
}
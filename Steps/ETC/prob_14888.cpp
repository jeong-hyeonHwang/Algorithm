//2022.03.08
#include <iostream>

using std::cin;
using std::cout;

int n;
int* A;
int op[4]; // + - * /
int t = 0;
char* opArr;

long long max = -1000000000;
long long min = 1000000000;

char Converter(int num)
{
    char result = ' ';
    switch (num)
    {
        case 0:
            result = '+';
            break;
        case 1:
            result = '-';
            break;
        case 2:
            result = '*';
            break;
        case 3:
            result = '/';
            break;
    }
    return result;
}

long long Calculate(char op, int n1, int n2)
{
    long long result = 0;
    switch (op)
    {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            result = n1 / n2;
            break;
    }
    return result;
}

void DFS(int startIndex, int depth)
{
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

    int range = startIndex + 4;
    for(int i = startIndex; i < range; i++)
    {
        if(op[i%4] != 0)
        {
            op[i%4] -= 1;
            opArr[t++] = Converter(i%4);
            DFS((i+1)%4, depth+1);
            op[i%4] += 1;
            t--;
        }
    }
}

int main()
{
    cin >> n;
    A = new int[n];
    opArr = new char[n-1];
    for(int i =0; i < n; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < 4; i++)
    {
        cin >> op[i];
    }

    t = 0; 
    DFS(0, 0);
    
    cout << max << '\n' << min;
}
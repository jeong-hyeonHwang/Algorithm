//2022.02.16-2022.02.17
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n = 0;
    int m = 0;
    int circulate = 0;
    cin >> n >> m >> circulate;

    long long** arr = new long long*[n+1];
    for(int i=1; i<= n; i++)
    {
        arr[i] = new long long[m+1];
    }
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // 3 4
    
    for(int k=0; 1+k  <= m-k ; k++)
    {
        int _n = 1+k;
        int _m = 1+k;
        
        int tempN = n-2*k;
        int tempM = m-2*k;
        int tempSize = 0;
        if(tempN == 0 || tempM == 0)
            break;
        else if(tempN == 1 && tempM == 1)
            break;
        else if(tempN == 1)
        {
            tempSize = tempM;
        }
        else if(tempM == 1)
        {
            tempSize = tempN;
        }
        else
        {
            tempSize = tempN*tempM - (tempN-2)*(tempM-2);
        }
        
        int* temp = new int[tempSize];
        int move = circulate%tempSize;
        int i = 0;

        // temp로 배열 옮기기
        while(move != i)
        {
            // _n == 1 -> _n == 1+k
            // _m != m -> _m = m-k
            // _n == n -> _n == n-k
            // _m != 1 -> 1+k

            if(_n == 1+k && _m != m-k)
            {
                _m++;
            }
            else if(_n != n-k && _m == m-k)
            {
                _n++;
            }
            else if(_n == n-k && _m != 1+k)
            {
                _m--;
            }
            else
            {
                _n--;
            }
            i++;
        }
    
        i =0;

        // 배열 돌리기
        while(true)
        {
            temp[i] = arr[_n][_m];
            
            if(_m == 1+k && _n != n-k)
            {
                _n++;
            }
            else if(_n == n-k && _m != m-k)
            {
                _m++;
            }
            else if(_m == m-k && _n != 1+k)
            {
                _n--;
            }
            else
            {
                _m--;
            }
            i++;
            if(i == tempSize)
                break;
        }
        
        // 돌린 배열 재삽입
        _n = 1+k;
        _m = 1+k;
        i = 0;
        while(true)
        {
            arr[_n][_m] = temp[i];
                
            if(_m == 1+k && _n != n-k)
            {
                _n++;
            }
            else if(_n == n-k && _m != m-k)
            {
                _m++;
            }
            else if(_m == m-k && _n != 1+k)
            {
                _n--;
            }
            else
            {
                _m--;
            }
            i++;
            
            if(i == tempSize)
                break;
        }
    }
    
    // Out
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}
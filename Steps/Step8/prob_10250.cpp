//2022.01.07
#include <iostream>

using namespace std;

// 아래층의 방을 더 선호한다.
// 거리가 짧은 곳을 더 선호한다.
// _h: 층 수
// _w: 호 수
// _n: n번째 손님
int WhichRoom(int _h, int _w, int _n)
{
    int fl = 0;
    int roomNum = 1;
    for(int j=0; j< _n; j++)
    {
        if(fl < _h)
        {
            fl += 1;
        }
        else
        {
            fl = 1;
            roomNum += 1;
        }
        
        cout << fl * 100 + roomNum << " ";
    }

    return fl * 100 + roomNum;
}

int main()
{
    int t;
    cin >> t;
    int* result = new int[t];

    int h, w, n;
    for(int i = 0; i < t; i++)
    {
        cin >> h >> w >> n;
        result[i] = WhichRoom(h,w,n);
    }
    
    for(int i =0; i <t; i++)
    {
        cout << result[i] << '\n';
    }
}
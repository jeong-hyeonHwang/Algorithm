//2022.03.28
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n, m;
    cin >> n >> m;
    int j;
    cin >> j;
    
    int bucketL = 1;
    int bucketR = m;
    int pos;
    int count = 0;
    for(int i=0; i < j; i++)
    {
        cin >> pos;
        if(pos < bucketL) // pos :: BucketLeft
        {
            count += bucketL - pos;
            bucketL = pos;
            bucketR = bucketL + m - 1;
        }
        else if(pos > bucketR) // BucketRight :: pos
        { 
            count += pos - bucketR;
            bucketR = pos;
            bucketL = bucketR - m + 1;
        }
    }
    cout << count;
}
//2022.05.13
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;

    int aIndex = A.size() - 1;
    int bIndex = B.size() - 1;

    int len = aIndex > bIndex ? aIndex : bIndex;
    int* result = new int[len];

    int count = 0;
    while(!(aIndex == -1 && bIndex == -1))
    {
        int tempN = 0;
        if(aIndex != -1)
        {
            tempN += A[aIndex] - '0';
            aIndex -= 1;
        }
        if(bIndex!= -1)
        {
            tempN += B[bIndex] - '0';
            bIndex -= 1;
        }
        result[count] = tempN;
        count += 1;
    }

    for(int i=count -1; i >= 0; i--)
    {
        cout << result[i];
    }
}
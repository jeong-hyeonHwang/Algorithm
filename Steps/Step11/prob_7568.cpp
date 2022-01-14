//2022.01.14
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int* wArr = new int[n];
    int* hArr = new int[n];

    for(int i =0; i< n; i++)
    {
        cin >> wArr[i] >> hArr[i];
    }
    
    int rank = 1;
    
    for(int i =0; i< n; i++)
    {
        rank = 1;
        for(int j = 0; j < n; j++)
        {
            if(wArr[i] < wArr[j] && hArr[i] < hArr[j])
            {
                rank += 1;
            }
        }
        cout << rank << " ";
    }
}
//2022.01.04
#include <iostream>
#include <array>

using namespace std;

int main()
{
    int size;
    cin >> size;
    string* arr = new string[size];
    
    for(int i =0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    int sum = 0;
    int repeat = 0;
    for(int i =0; i< size; i++)
    {
        for(int j = 0; j < arr[i].size(); j++)
        {
            if(arr[i][j] == 'O')
            {
                repeat += 1;
                sum += repeat;
            }
            else
            {
                repeat = 0;
            }
        }
        cout << sum << '\n';
        sum = 0;
        repeat = 0;
    }
}
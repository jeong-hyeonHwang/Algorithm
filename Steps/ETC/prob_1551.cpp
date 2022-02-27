//2022.02.27
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int n, k;
    cin >> n >> k;
    int* arr = new int[n];
    int t = 0;
    string str;
    cin >> str;
    string num;
    for(int i=0; i<= str.size(); i++)
    {
        if(i == str.size() || str[i] == ',')
        {
            if(num[0] != '-')
            {
                arr[t] = stoi(num);
            }
            else
            {
                string temp = num.substr(1, num.size());
                arr[t] = -stoi(temp);
            }
            num = "";
            t++;
        }
        else
            num += str[i];
    }
    
    for(int i=0; i< k; i++)
    {
        int* temp = new int[n-i];
        for(int j = 0; j < n-i-1; j++)
        {
            temp[j] = arr[j+1] - arr[j];
        }
        for(int j = 0; j < n-i-1; j++)
        {
            arr[j] = temp[j];
        }
    }

    for(int i =0; i < n-k; i++)
    {
        cout << arr[i];
        if(i != n-k-1)
            cout << ',';
    }
}

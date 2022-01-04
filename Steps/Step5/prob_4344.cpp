//2022.01.04
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int size;
    cin >> size;
    double* result = new double[size];
    for(int i =0; i<size; i++)
    {
        int t;
        cin >> t;
        int* grades = new int[t];
        int sum = 0;
        float average = 0;
        for(int j =0; j < t; j++)
        {
            cin >> grades[j];
            sum += grades[j];
        }
        average = sum / t;
        int  num = 0;
        for(int j =0; j < t; j++)
        {
            if(grades[j] > average)
                num += 1;
        }
        double _result = ((double)num) / ((double)t) * 100;
        _result = (round(_result * 1000)) / 1000.0;
        result[i] = _result;
    }
    cout << fixed;
    cout.precision(3);
    for(int i =0; i <size; i++)
    {
        cout << result[i] << "%" << '\n';
    }
}
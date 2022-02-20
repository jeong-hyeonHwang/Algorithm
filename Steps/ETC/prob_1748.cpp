//2022.02.20
#include <iostream>
#include <math.h>
#include <string>

using std::cin;
using std::cout;
//using std::pow;
using std::string;
using std::stoi;

int main()
{
    string n;
    cin >> n;
    
    long long result = 0;
    long long zari = 1;
    
    if(n.size() == 1)
    {
        cout << stoi(n);
        return 0;
    }
    
    for(int i=0; i< n.size() - 1; i++)
    {
        result += 9 * pow(10, zari-1) * zari;
        zari += 1;
    }
    // 121 
    result += (stol(n) - (long)pow(10,zari-1) + 1) * zari;
    cout << result;
}
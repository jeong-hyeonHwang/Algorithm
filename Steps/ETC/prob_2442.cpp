//2022.01.29
#include <iostream>

using std::cin;
using std::cout;

void Star(int n)
{
    int maxNum = 2*n - 1;
    int blank = n - 1;
    for(int i=1; i<= n; i++)
    {
        for(int j=0; j < blank; j++)
            cout << ' ';
        for(int j=0; j < 2*i - 1; j++)
            cout << '*';
        cout << '\n';
        blank--;
    }
}
int main()
{
    int num;
    cin >> num;
    Star(num);

}
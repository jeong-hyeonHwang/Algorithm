//2022.01.30
#include <iostream>

using std::cin;
using std::cout;
using std::string;

bool PalindromeCheck(string s)
{
    int middle = s.size()/2;
    int j = s.size() - 1;
    for(int i=0; i < middle; i++)
    {
        if(s[i] != s[j])
            return false;
        j--;
    }
    return true;
}

int main()
{
    while(true)
    {
        string numbers;
        cin >> numbers;
        
        if(numbers[0] == '0')
            break;
        
        if(PalindromeCheck(numbers) == true)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
         
    }
}
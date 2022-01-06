//2022.01.05_2022.01.06
#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int result = 0;
    for(int i =0; i < str.size(); i++)
    {
        if(str[i] == 'c') // c
        {
            if(str[i+1] == '=' || str[i+1] == '-') // c= or c-
            {
                i+=1;
            }
        }
        else if(str[i] == 'd') // d
        {
            if(str[i+1] == '-') // d-
            {
                i+=1;
            }
            else if(str[i+1] == 'z' && str[i+2] == '=') //dz=
            {
                i+=2;
            }
        }
        else if(str[i] == 'l' && str[i+1] == 'j') // lj
        {
            i+=1;   
        }
        else if(str[i] == 'n' && str[i+1] == 'j') // nj
        {
            i+=1;   
        }
        else if(str[i] == 's' && str[i+1] == '=') // s=
        {
            i+=1;   
        }
        else if(str[i] == 'z' && str[i+1] == '=') // z=
        {
            i+=1;   
        }
        
        result += 1;
    }
    cout << result;
}
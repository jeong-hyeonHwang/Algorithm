//2022.02.01-2022.02.03
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::stoi;

int main()
{
    string formula;
    cin >> formula;
    char temp[100];
    bool minusStart = false;
    int k = 0;
    int result = 0;
    string num;
    for(int i=0; i <= formula.size(); i++)
    {
        //cout << i << " ";
        if(formula[i] == '-' || formula[i] == '+' || i == formula.size())
        {
            if(minusStart == true)
            {
                result -= stoi(num);
                num = "";
            }
            else
            {
                result += stoi(num);
                num = "";
            }
        }
        else
        {
            num += formula[i];
        }
        
        
        if(formula[i] == '-')
            minusStart = true;
            
        //cout << num << ' ';
        //cout << " >> RESULT " << result << '\n';
    }
    
    // 수식의 연산 과정에 대해 제대로 보고 싶다면 아래의 주석들을 해제
    // minusStart = false;
    // for(int i=0; i < formula.size(); i++)
    // {
        
    //     if(formula[i] == '-')
    //     {
    //         if(minusStart == false)
    //         {
    //             temp[k] = '-';
    //             temp[k+1] = '(';
    //             k+= 2;
    //             minusStart = true;
    //         }    
    //         else
    //         {
    //             temp[k] = ')';
    //             temp[k+1] = '-';
    //             k+= 2;
    //             minusStart = false;
    //         }
    //     }
    //     else
    //     {
    //         temp[k] = formula[i];
    //         k++;
    //     }
        
    //     if(i == formula.size()-1 && minusStart == true)
    //     {
    //         temp[k] = ')';
    //         k+= 1;
    //     }

    // }
    
    // for(int i=0; i<k; i++)
    // {
    //     cout << temp[i];
    // }
    // cout << '\n';
    cout << result;
}

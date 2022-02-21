//2022.02.21
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int Absolute(char n)
{
    int num = n - '0';
    return num>0? num: -num;
}

int main()
{
    string a, b;
    cin >> a >> b;

    int r = 0;
    int sum = 0;
    int aIndex = a.size()-1;
    int bIndex = b.size()-1;
        
    int len = aIndex > bIndex? aIndex: bIndex;
    int result[len + 1];
        
    for(int i=0; i< len + 1; i++)
    {
        result[i] = 0;
    }
    // case: - -
    // case: - +
    // case: + -
    // case: + +
    if(a[0] == '-' && b[0] == '-')
    {
        int i=0;
        while(!(aIndex == 0  && bIndex == 0))
        {
            sum = 0 + r;
            if(aIndex != 0)
            {
                sum += a[aIndex] - '0';
                aIndex--;
            }
            if(bIndex != 0)
            {
                sum += b[bIndex] - '0';
                bIndex--;
            }
            result[i] = sum%10;
            i++;
            r = sum/10;
        }
        if(r != 0)
        {
            result[i] = r;
            i++;
        }
        
        cout << '-';
        for(int k=i-1; k >= 0; k--)
        {
            cout << result[k];
        }
    }
    else if(a[0] != '-' && b[0] != '-')
    {
        int i=0;
        while(!(aIndex < 0  && bIndex < 0))
        {
            sum = 0 + r;
            if(aIndex >= 0)
            {
                sum += a[aIndex] - '0';
                aIndex--;
            }
            if(bIndex >= 0)
            {
                sum += b[bIndex] - '0';
                bIndex--;
            }
            result[i] = (sum%10);
            i++;
            r = sum/10;
        }
       if(r != 0)
        {
            result[i] = r;
            i++;
        }
        for(int k=i-1; k >= 0; k--)
        {
            cout << result[k];
        }
    }
    else
    {
        int tempA = 0;
        int tempB = 0;
        if(a[0] == '-')
            tempA = 1;
        else if(b[0] == '-')
            tempB = 1;
        
        string longOne;
        string another;
        string aTemp = "a";
        string bTemp = "b";
        if(aIndex - tempA == bIndex - tempB)
        {
            aTemp = a.substr(tempA, a.size() - tempA);
            bTemp = b.substr(tempB, b.size() - tempB);
            
            longOne = aTemp > bTemp? a : b;
            another = aTemp > bTemp? b : a;
            
        }
        else
        {
            longOne = aIndex - tempA > bIndex - tempB? a:b;
            another = aIndex - tempA > bIndex - tempB? b:a;   
        }
        int longIndex = longOne.size()-1;
        int anotherIndex = another.size()-1;
        int lEndPoint = longOne[0] == '-'? 1: 0;
        int aEndPoint = another[0] == '-'? 1: 0;
        
        int i=0;
        while(!(longIndex < lEndPoint && anotherIndex < aEndPoint))
        {
            sum = -r;
            if(longIndex >= lEndPoint)
            {
                sum += longOne[longIndex] -'0';
                longIndex--;
            }
            
            if(anotherIndex >= aEndPoint)
            {
                sum -= another[anotherIndex] - '0';
                anotherIndex--;
            }
            r = 0;
            
            if(sum < 0)
            {
                r = 1;
                sum += 10;
            }
            result[i] = sum%10;
            i++;
        }
        if(r != 0)
        {
            result[i] = r;
            i++;
        }

        bool zeroCheck = false;
        if(i-1 == 0 && result[0] == 0)
        {
            cout << 0;
            return 0;
        }
        if(longOne[0] == '-' && (aTemp != bTemp))// Case: Long one Is Minus
            cout << '-';
            
        for(int k=i-1; k >= 0; k--)
        {
            if(zeroCheck == false && result[k] != 0)
            {
                cout << result[k];
                zeroCheck = true;
            }
            else if(zeroCheck == true && result[k] == 0)
                cout << result[k];
            else if(result[k] != 0)
                cout << result[k];
            else if(k == 0 && result[k] ==0)
                cout << result[k];
        }
    }   
}

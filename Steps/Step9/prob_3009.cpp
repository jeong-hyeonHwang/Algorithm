//2022.01.10
#include <iostream>

int main()
{
    int* x = new int[3];
    int* y = new int[3];
    for(int i =0; i< 3; i++)
    {
        std::cin >> x[i] >> y[i];
    }
    int xP = 0;
    if(x[0] == x[1])
        xP = x[2];
    else
    {
        if(x[0] == x[2])
            xP = x[1];
        else
        {
            if(x[1] == x[2])
                xP = x[0];
        }
    }

    int yP = 0;
    if(y[0] == y[1])
        yP = y[2];
    else
    {
        if(y[0] == y[2])
            yP = y[1];
        else
        {
            if(y[1] == y[2])
                yP = y[0];
        }
    }

    std::cout << xP << " " << yP;
}
//2022.01.10
#include <iostream>

int main()
{
    int x, y, w, h;
    std::cin >> x >> y >> w >> h;
    
    int left = x;
    int right = w-x;
    int down = y;
    int up = h-y;

    int hor = 0;
    if (left > right)
        hor = right;
    else
        hor = left;

    int vert = 0;
    if(down > up)
        vert = up;
    else
        vert = down;

    if(hor > vert)
        std::cout << vert;
    else
        std::cout << hor;
}
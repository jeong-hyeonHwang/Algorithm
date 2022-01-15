//2022.01.15
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int min;

string bStart[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
};

string wStart[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

int MinRedrawNumIs(int iSP, int jSP, string* board) // i Start Point, j Start Point
{

    int startB = 0;
    int startW = 0;
    
    for(int i =0; i < 8; i++)
    {
        for(int j =0; j < 8; j++)
        {
            if( board[i+iSP][j+jSP] != bStart[i][j])
                startB += 1;
            
            if( board[i+iSP][j+jSP] != wStart[i][j])
                startW += 1;
        }
    }
    
    int result = startB > startW? startW : startB;
    return result;
}

int main()
{
    min = 800;

    int r, c;
    cin >> r >> c;
    string* chessBoard = new string[r];
    
    for(int i =0; i<r; i++)
    {
        cin >> chessBoard[i];
    }
    
    for(int t = 0; t <= r-8; t++)
    {
        for(int k =0; k <= c-8; k++)
        {
            int result = MinRedrawNumIs(t,k, chessBoard);
            if(min > result)
                min = result;
        }
    }

    cout << min;

}
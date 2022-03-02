//2022.03.02
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string board;
    cin >> board;
    int i = 0;
    int count = 0;
    string result = "";
    while(i <= board.size())
    {
        if(board[i] == '.' || i == board.size())
        {
            if(count % 4 == 0 || count % 4 == 2)
            {
                for(int t = 0; t < count/4; t++)
                {
                    result += "AAAA";
                }
                for(int t = 0; t < count%4/2; t++)
                {
                    result += "BB";
                }
            }
            else if(count % 6 == 0)
            {
                for(int t = 0; t < count/6; t++)
                {
                    result += "AAAABB";
                }
            }
            else if(count % 2 == 0)
            {
                for(int t = 0; t < count/2; t++)
                {
                    result += "BB";
                }
            }
            else
            {
                cout << -1;
                return 0;
            }
            count = 0;
            if(i != board.size())
                result += '.';
        }
        else
        {
            count += 1;
        }
        i++;
    }
    cout << result;
}
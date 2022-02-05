//2022.02.05
#include <iostream>
#include <map>

using namespace std;

map<string, int> bookList;

int main()
{
    int n;
    cin >> n;
    string bName;
    string bestOne;
    
    for(int i=0; i< n; i++)
    {
        cin >> bName;
        if(i == 0)
        {
            bookList.insert(make_pair(bName, 1));
            bestOne = bName;
        }
        else if(bookList.find(bName) != bookList.end())
        {
            bookList[bName] += 1;
        }
        else
            bookList.insert(make_pair(bName, 1));
            
        if(bookList[bName] > bookList[bestOne])
        {
            bestOne = bName;
        }
        else if(bookList[bName] == bookList[bestOne])
        {
            if(bName < bestOne) // 주의: bName.compare(bestOne)과는 살짝 다름!!!
                bestOne = bName;
        }
    }
    cout << bestOne;
}
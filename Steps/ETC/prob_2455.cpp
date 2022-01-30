//2022.01.30
#include <iostream>

using std::cin;
using std::cout;

int main()
{
	int hiP = 0;
	int byeP = 0;
	
	int people = 0;
	int max = 0;
	for(int i=0; i<4; i++)
	{
		cin >> byeP >> hiP;
		people = people - byeP + hiP;
		if(people > max)
		{
			max = people;
		}
	}
	cout << max;
}
#include <iostream>
using namespace std;

int main()
{
	int i;
	
	for(i=0; i<5; i++)
	{
		switch(i)
		{
			case 0: cout << " less than 1\n";
			case 1: cout << " less than 2\n";
			case 2: cout << " less than 3\n";
			case 3: cout << " less than 4\n";
			case 4: cout << " less than 5\n";
			default:
				cout << ' ';
		}
		cout << '\n';
	}
	
	return 0;
}

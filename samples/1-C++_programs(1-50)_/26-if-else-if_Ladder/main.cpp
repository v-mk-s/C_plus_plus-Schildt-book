// ������������ ������������� "��������" if-else-if.
#include <iostream>
using namespace std;

int main()
{
	int x;
	
	for(x=0; x<6; x++)
	{
		if(x==1) cout << "x is one.\n";
		else if(x==2) cout << "x is two.\n";
		else if(x==3) cout << "x is three.\n";
		else if(x==4) cout << "x is four.\n";
		else cout << "x is not between 1 to 4.\n";
	}
	
	return 0;
}

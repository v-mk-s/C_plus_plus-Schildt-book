#include <iostream>
using namespace std;

int main()
{
	int t, count;
	
	for(t=0; t<10; t++)
	{
		count = 1;
		for(;;)
		{
			cout << count << ' ';
			count++;
			if(count==10) break;
		}
		cout << '\n';
	}
	
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int t;
	
	// Цикл работает для значений t от 0 до 9, а не до 100!
	for(t=0; t<100; t++)
	{
		if(t==10) break;
		cout << t << ' ';
	}
	return 0;
}

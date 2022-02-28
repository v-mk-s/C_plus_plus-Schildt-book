// Ёта программа не будет выполн€тьс€ правильно.
#include <iostream>
using namespace std;

int main()
{
	double x, y;
	int *p;
	
	x = 111.1;
	p = (int *) &x;
	
	y = *p;
	cout << y;
	
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int x, y;
	
	x = 10;
	y = 3;
	cout << x/y; // Будет отображено число 3.
	cout << '\n';
	cout << x%y; // Будет отображено число 1, т.е. остаток от деления нацело.
	cout << '\n';
	
	x = 1;
	y = 2;
	cout << x/y << " " << x%y; // Будут выведены числа 0 и 1.
	
	return 0;
}

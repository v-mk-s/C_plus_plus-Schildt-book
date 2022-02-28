#include <iostream>
using namespace std;

void func();

int main()
{
	int x; // Локальная переменная для функции main().
	
	x = 10;
	func();
	cout << "\n";
	cout << x; // Выводится число 10.
	
	return 0;
}

void func()
{
	int x; // Локальная перемеенная для функции func().
	
	x = -199;
	cout << x; // Выводится число -199.
}


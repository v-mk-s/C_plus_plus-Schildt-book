// Программа демонстрирует использование блока кода.

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	
	if(a < b)
	{
		cout << "First number is less than second.\n";
		cout << "Their difference is: " << b - a;
	}
	return 0;
}

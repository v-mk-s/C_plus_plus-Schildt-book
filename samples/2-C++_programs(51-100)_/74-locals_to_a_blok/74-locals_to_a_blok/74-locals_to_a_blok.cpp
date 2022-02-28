#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int choice;

	cout << "(1) add numbers or ";
	cout << "(2) concatenate strings?: ";

	cin >> choice;
	if (choice == 1)
	{
		int a, b; // Активизируются две int-переменные.
		cout << "Enter two numbers: ";
		cin >> a >> b;
		cout << "Sum is " << a + b << '\n';
	}
	
	else
	{
		char s1[80], s2[80]; // Активизируются две строки.
		cout << "Enter two strings : ";
		cin >> s1;
		cin >> s2;
		strcat(s1, s2);
		cout << "Concatenation is\n" << s1 << '\n';
	}

	return 0;
}
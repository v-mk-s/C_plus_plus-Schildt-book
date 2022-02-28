// Использование функции gets() для считывания строки с клавиатуры.

#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	char str[80];
	
	cout << "Enter a string: ";
	gets(str); // Считываем строку с клавиатуры.
	cout << "Here is your string: ";
	cout << str;
	
	return 0;
}

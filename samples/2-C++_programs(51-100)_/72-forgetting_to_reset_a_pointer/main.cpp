#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char s[80];
	char *p1;
	
	do {
		p1 = s; // Устанавливаем p1 при каждой итерации цикла.
		
		cout << "Enter a string: ";
		gets(p1); // Считываем строку.
		// Выводим ASCII-значения каждого символа
		while(*p1) cout << (int) *p1++ << ' ';
		cout << '\n';
	} while (strcmp(s, "done"));
	
	return 0;
}

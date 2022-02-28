#include <iostream>
#include <cstring>
using namespace std;

void f1();

int main()
{
	f1();
	f1();
	return 0;
}

void f1()
{
	char s[80]="This is a test\n";
	
	cout << s;
	strcpy(s, "CHANGED\n"); // Изменяем значение строки s.
	cout << s;
}

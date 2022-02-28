#include <iostream>
using namespace std;

void func1();
void func2();

int count; // Ёто глобальна€ переменна€.

int main()
{
	int i; // Ёто локальна€ переменна€.
	
	for(i=0; i<10; i++)
	{
		count = i * 2;
		func1();
	}
	
	return 0;
}

void func1()
{
	cout << "count: " << count; //ќбращение к глобальной переменной.
	cout << '\n'; // ¬ывод символа новой строки.
	func2();
}

void func2()
{
	int count; // Ёто локальна€ переменна€.
	
	for(count=0; count<3; count++) cout << '.';
}

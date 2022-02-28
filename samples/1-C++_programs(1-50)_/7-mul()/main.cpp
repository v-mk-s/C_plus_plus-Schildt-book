// Простая программа, которая демонстрирует использование функции mul().

#include <iostream>
using namespace std;

void mul(int x, int y); // Прототим функции mul().

int main()
{
	mul(10,20);
	mul(5,6);
	mul(8,9);
	
	return 0;
}

void mul(int x, int y)
{
	cout << x * y <<" ";
}

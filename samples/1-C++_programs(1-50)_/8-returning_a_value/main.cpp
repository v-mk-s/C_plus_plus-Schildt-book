// Демонстрация возврата йункциями значений.

#include <iostream>
using namespace std;

int mul(int x, int y); // Прототим функции mul().

int main()
{
	int answer;
	
	mul(10,11);
	
	answer = mul(10, 11); // Присваивание значения, возвращаемого функцией.
	
	cout << "The answer is " << answer;
	
	return 0;
}

// Эта функция возвращает значение.
int mul(int x, int y)
{
	return x * y; // Функция возвращает произведение x и y.
}

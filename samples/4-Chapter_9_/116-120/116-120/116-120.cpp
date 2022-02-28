// 116 - Использование спецификатора const гарантирует, что
// str не может изменить аргумент, на который он указывает

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

void code(const char *str);
void decode(const char *str);

int main()
{
	char str[] = "This is a test.";
	cout << str;
	cout << '\n';
	code(str);
	cout << '\n';
	decode(str);
	cout << '\n';

	return 0;
}

void code(const char *str)
{
	while (*str)
	{
		cout << (char) (*str + 1);
		str++;
	}
}


void decode(const char *str)
{
	while (*str)
	{
		cout << (char) (*str - 1);
		str++;
	}
}
*/


// 117 - нельзя модифицировать const-ссылки

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

void f(const int &i);

int main()
{
	int k = 10;

	f(k);

	return 0;
}

// Использование ссылочного const-параметра.
void f(const int &i)
{
	i = 100; // Ошибка, нельзя модифицировать const-ссылку.
	cout << i;
}
*/


// 118 - пробуем спецификатор const "на вкус"

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

const int s = 15;

int main()
{
	int A1[s], A2[s], A3[s];
	//...

	return 0;
}
*/


// 119 - extern-спецификатор

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	extern int first, last; // Использование глобальных переменных.

	cout << first << ' ' << last << '\n';

	return 0;
}


// Глобальное определение переменных first и last.
int first = 10, last = 20;
*/


// 120 - локальные static-переменные

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

int r_avg(int i);

int main()
{
	int num;

	do
	{
		cout << "Enter numbers (-1 to quit): ";
		cin >> num;
		if (num != -1)
			cout << "Running average is: " << r_avg(num) << '\n';
	} while (num > -1);

	return 0;
}

// Вычисляем текущее среднее.
int r_avg(int i)
{
	static int sum = 0, count = 0;
	sum = sum + i;
	count++;
	return sum / count;

	return 0;
}
*/
// 101 - call-by-value

/*
#include "stdafx.h"
#include <iostream>

int sqr_it(int x);

using namespace std;

int main()
{
	int t = 10;
	cout << sqr_it(t) << ' ' << t << '\n';
	return 0;
}

int sqr_it(int x)
{
	x = x*x;
	return x;
}
*/


// 102 - использование указателей, как параметров функции

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

// Объявляем функцию swap(), которая использует указатели.
void swap(int *x, int *y);

int main()
{
	int i, j;

	i = 10;
	j = 20;

	cout << "Initial values of i and j: ";
	cout << i << ' ' << j << '\n';

	swap(&j, &i); // call swap() with addresses of i and j
	cout << "Swapped values of i and j: ";
	cout << i << ' ' << j << '\n';

	return 0;
}

// Exchange arguments.
void swap(int *x, int *y)
{
	int temp;

	temp = *x; // save the value at address x
	*x = *y; // put y into x
	*y = temp; // put x into y
}
*/


// 103 - call-by-reference (использование ссылочного параметра)

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

void f(int &i);

int main()
{
	int val = 1;

	cout << "Old value for val: " << val << '\n';

	f(val); // pass address of val to f()

	cout << "New value for val: " << val << '\n';

	return 0;
}

void f(int &i)
{
	i = 10; // Модификация аргумента, заданного при вызове.
}
*/


// 104 - переписанная функция swap() с использованием ссылки

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

// Объявляем функцию swap() с использованием ссылочных параметров.
void swap(int &x, int &y);

int main()
{
	int i, j;

	i = 10;
	j = 20;

	cout << "Initial values of i and j: ";
	cout << i << ' ' << j << '\n';

	swap(j, i); // call swap() with addresses of i and j
	cout << "Swapped values of i and j: ";
	cout << i << ' ' << j << '\n';

	return 0;
}

//Here, swap() is defined as using call-by-reference,
//not call-by-value. Thus, it can exchange the two
//arguments it is callen with.

void swap(int &x, int &y)
{
	int temp;

	temp = x; // save the value at address x
	x = y; // put y into x
	y = temp; // put x into y
}
*/


// 105 - Возврат ссылки

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

double &f();
double val = 100.0;

int main()
{
	double newval;

	cout << f() << '\n'; // Отображаем значение val.

	newval = f(); // Присваиваем значение val переменной newval.

	cout << newval << '\n'; // Отображаем значение newval.

	f() = 99.1; // Изменяем значение val.

	cout << f() << '\n'; // Отображаем новое значение val.

	cout << val << '\n';
	cout << newval << '\n';

	return 0;
}


double  &f()
{
	return val; // Возвращаем ссылку на val.
}
*/


// 106 - возврат ссылки

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

double &change_it(int i); // Функция возвращает ссылку.

double vals[] = {1.1, 2.2, 3.3, 4.4, 5.5};

int main()
{
	int i;

	cout << "Here are the original values: ";
	for (i = 0; i < 5; i++) cout << vals[i] << ' ';
	cout << '\n';

	change_it(1) = 5298.23; // Изменяем 2-й элемент.
	change_it(3) = -98.8; // Изменяем 4-й элемент.

	cout << "Here are the changed values: ";
	for (i = 0; i < 5; i++) cout << vals[i] << ' ';
	cout << '\n';

	return 0;
}

double &change_it(int i)
{
	return vals[i]; // Возвращаем ссылку на 1-й элемент.
}
*/


// 107 - создание ограниченного массива

/*
// Простой способ организации безопасного массива.
#include "stdafx.h"
#include <iostream>

using namespace std;

int &put(int i); // Помещаем значение в массив.
int get(int i); // Считываем значение из массива.

int vals[10];
int error = -1;

int main()
{
	put(0) = 10; // Помещаем значения в массив.
	put(1) = 20;
	put(9) = 30;

	cout << get(0) << ' ';
	cout << get(1) << ' ';
	cout << get(9) << ' ';

	// А теперь специально генерируем ошибку.
	put(12) = 1; // Индекс за пределами границ массива.

	cout << get(11) << ' ' << get(12) << ' ' << error;

	return 0;
}

// Функция занесения значения в массив.
int &put(int i)
{
	if (i >= 0 && i < 10) return vals[i]; // Возвращаем ссылку на 1-й элемент.
	else
	{
		cout << "\nBounds Error!\n";

		return error; // Возвращаем ссылку на error.
	}
}

// Функция считывания значения из массива.
int get(int i)
{
	if (i >= 0 && i < 10) return vals[i]; // Возвращаем значение i-го элемента
	else
	{
		cout << "\nBounds Error!\n";

		return error; // Возвращаем значение переменной error.
	}
}
*/


// 108 - Независимые ссылки


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int j, k;
	int &i = j; // независимая ссылка
	int *p = &k;
	j = 10;

	cout << &j << ' ' << &i; // Выводится: 10 10

	k = 121;
	i = k; // Копирует в переменную j значение
		   // переменной k, а не адрес переменной k.

	cout << '\n' << j << '\n'; // Выводится: 121
	cout << &i << ' ' << j;

	return 0;
}



// 109 - "Трёхкратная перегрузка функции f().

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

void f(int i); // один целочисленный параметр
void f(int i, int j); // два целочисленных параметра
void f(double k); // один параметр типа double

int main()
{
	f(10); // вызов функции f(int)

	f(10, 20); // вызов функции f(int, int)

	f(12.23); // вызов функции f(double)

	return 0;
}

void f(int i)
{
	cout << "In f(int), i is " << i << '\n';
}

void f(int i, int j)
{
	cout << "In f(int, int), i is " << i;
	cout << ", j is " << j << '\n';
}

void f(double k)
{
	cout << "In f(double), k is " << k << '\n';
}
*/


// 110 -  создание функций myabs() -- перегруженной, версия функции abs().
/*

#include "stdafx.h"
#include <iostream>

using namespace std;

// Функция myabs() перегружается тремя способами.
int myabs(int i);
double myabs(double d);
long myabs(long l);

int main()
{
	cout << myabs(-10) << '\n';
	cout << myabs(-11.0) << '\n';
	cout << myabs(-9L) << '\n';

	return 0;
}

int myabs(int i)
{
	cout << "Using integer myabs(): ";
	if (i < 0) return -i;
	else return i;
}

double myabs(double d)
{
	cout << "Using double myabs(): ";
	if (d < 0) return -d;
	else return d;
}

long myabs(long l)
{
	cout << "Using long myabs(): ";
	if (l < 0) return -l;
	else return l;
}
*/
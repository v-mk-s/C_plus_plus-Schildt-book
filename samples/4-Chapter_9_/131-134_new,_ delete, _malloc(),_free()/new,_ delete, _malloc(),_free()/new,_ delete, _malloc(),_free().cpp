#include "stdafx.h"
#include <iostream>

using namespace std;

void pause();

void pause()
{
	cout << '\n';
	system("pause");
}


// 131 - динамическое выделение и освобождение памяти

/*
int main()
{
	int *p;

	p = new int; // выделяем память для int-значения.

	*p = 20; // помещаем в эту область памяти значение 20.

	cout << *p; // убеждаемся (путём вывода на экран) в работоспособности этого кода.

	delete p; // освобождаем память

	pause();
	return 0;
}
*/


// 132 - инициализация динамически выделенной памяти

/*
int main()
{
	int *p;

	p = new int (99); // Инициализируем память числом 99.
	cout << *p;

	delete p;

	pause();
	return 0;
}
*/


// 133 - выделение памяти для массивов

/*
int main()
{
	int *a[10], i, j, num = 0;

	for (i = 0; i < 10; i++)
		a[i] = new int[10]; // выделяем память для 100-элементного  двумерного массива.

	// заполняем массив значениями от 0 до 99.
	for (j = 0; j < 10; j++)
		for (i = 0; i < 10; i++)
		{
			a[j][i] = num;
			num++;
		}


	// выводим на экран 100-элементный двумерный массив.
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
			cout << a[j][i] << ' ';
		cout << '\n';
	}

	// выводим отдельные элементы
	cout << *a[7];

	cout << '\n';

	cout << a[7][6];

	// удаляем весь 100-элементный двумерный массив.
	for (i = 0; i < 10; i++)
		delete [] a[i]; // выделяем память для 10-элементного массива.

	pause();
	return 0;
}
*/


/*
int main()
{
	double *p;
	int i;

	p = new double[10]; // выделяем память для 10-элементного массива

	// заполняем массив значениями от 100 до 109.
	for (i = 0; i < 10; i++) p[i] = 100.00 + i;

	// отображаем содержимое массива.
	for (i = 0; i < 10; i++) cout << p[i] << ' ';

	delete[] p; // удаляем весь массив.

	pause();
	return 0;
}
*/


// 134 - динамическое распределение памяти в языке C: функции malloc() и free()

/*
#include <cstdlib>

int main()
{
	int *i;
	double *j;

	i = (int *) malloc(sizeof(int));
	if (!i)
	{
		cout << "Allocation failed.\n";
		return 1;
	}

	j = (double *) malloc(sizeof(int));
	if (!j)
	{
		cout << "Allocation failed.\n";
		return 1;
	}

	*i = 10;
	*j = 100.123;
	
	cout << *i << ' ' << *j;

	// Освобождение памяти.
	free(i);
	free(j);

	pause();
	return 0;
}
*/

/*

int main()
{
	int *a;
	cout << a << '\n' << *a << '\n';
	cout << '\n';

	*a = 5;
	cout << a << '\n' << *a << '\n';
	cout << '\n';

	int c = 10;
	cout << &c << '\n' << c << '\n';

	int &b = c;
	cout << '\n';
	cout << &b << '\n' << b << '\n';

	int &d = *a;
	cout << '\n';
	cout << &d << '\n' << d << '\n';

	int f = 4;
	cout << '\n';
	cout << &f << '\n' << f << '\n';

	a = &f;
	cout << '\n';
	cout << a << '\n' << *a << '\n';

	cout << "\n\n\n";

	f++;
	cout << *a << ' ' << f << '\n';

	cout << '\n';

	int &l = f;

	cout << l << ' ' << f << '\n';

	f++;
	l++;
	cout << l << ' ' << f << '\n';

	pause();
	return 0;
}

*/
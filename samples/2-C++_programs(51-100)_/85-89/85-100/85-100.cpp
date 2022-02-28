#include "stdafx.h"
// 85 - первый способ вызова функции с массивами

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

void display(int num[10]);

int main()
{
	int t[10], i;

	for (i = 0; i < 10; ++i) t[i] = i;

	display(t); // Передаём функции массив t.

    return 0;
}

// Функция выводит все элементы массива.
void display(int num[10])
{
	int i;

	for (i = 0; i < 10; i++) cout << num[i] << ' ';
}
*/


// 86 - Более эффективное решение предыдущей задачи.

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

void display(int num);

int main()
{
	int t[10], i;

	for (i = 0; i < 10; ++i) t[i] = i;
	for (i = 0; i < 10; ++i) display(t[i]);

	return 0;
}

// Функция выводит одно число.
void display(int num)
{
	cout << num << ' ';
}
*/


// 87 - Реальное изменение содержимого массива.

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

void cube(int *n, int num);

int main()
{
	int i, nums[10];

	for (i = 0; i < 10; ++i) nums[i] = i + 1;
	cout << "Original contents: ";
	for (i = 0; i < 10; ++i) cout << nums[i] << ' ';
	cout << '\n';

	cube(nums, 10); // Вычисляем кубы значений.

	cout << "Altered contents: ";
	for (i = 0; i < 10; ++i) cout << nums[i] << ' ';
	cout << '\n';

	return 0;
}

void cube(int *n, int num)
{
	while (num)
	{
		*n = *n * *n * *n;
		num--;
		n++;
	}
}
*/


// 88 - Функция stringupper() преобразует 
// строку символов в её прописной эквивалент.

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

void stringupper(char *str);

int main()
{
	char str[80];

	strcpy(str, "this is a test");

	stringupper(str);
	cout << str << '\n'; // Отображаем строку с использованием
				// прописного написания символов.

	return 0;
}

void stringupper(char *str)
{
	while (*str)
	{
		*str = toupper(*str); // Получаем прописной
							 // эквивалент одного символа.

		str++; // Переходим к следующему символу.
	}
}
*/



// 89


#include <iostream>

using namespace std;

int mystrlen(char *str);

int main()
{
	cout << "Length of Hello There is: ";
	cout << mystrlen("Hello There") << '\n';

	return 0;
}

// Нестандартная реализация функции strlen().
int mystrlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++); // Находим конец строки.

	return i;
}

/* 122 - Программа демонстрирует влияние, которое может
   оказать использование register-переменной на
   скорость выполнения программы.
*/

/*
#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

unsigned int i; // не register-переменная
unsigned int delay;

int main()
{
	register unsigned int j;
	long start, end;

	start = clock();
	for (delay = 0; delay < 100; delay++)
		for (j = 0; j < 64000000; j++);
	end = clock();
	cout << "Number of clock ticks for register loop: ";
	cout << end - start << '\n';

	start = clock();
	for (delay = 0; delay < 100; delay++)
		for (i = 0; i < 64000000; i++);
	end = clock();
	cout << "Number of clock ticks for non-register loop: ";
	cout << end - start << '\n';

	return 0;
}
*/


// 123 - enumeration (перечисление)

/*
#include "stdafx.h"

using namespace std;

enum apple
{
	Jonathan, Golden_Del, Red_Del,
	Winesap, Cortland, McIntosh
};

// Массив строк, связанных с перечислением apple.
char name[][20] =
{
	"Jonathan",
	"Golden_Del",
	"Red_Del",
	"Winesap",
	"Cortland",
	"McIntosh"
};

int main()
{
	apple fruit;

	fruit = Jonathan;
	cout << name[fruit] << '\n';

	fruit = Winesap;
	cout << name[fruit] << '\n';

	fruit = McIntosh;
	cout << name[fruit] << '\n';

	return 0;
}
*/


#include "stdafx.h"
#include <iostream>

using namespace std;

// Отображение конфигурации битов в байте.
void disp_binary(unsigned u);

void disp_binary(unsigned u)
{
	register int t;

	//cout << '\n';

	//for (t = 4294967296; !(u & t); t = t / 2)

	for (t = 128; t > 0; t = t / 2)
		if (u & t) cout << "1 ";
		else cout << "0 ";

		cout << '\n';
		// cout << '\n';

}


// ПОРАЗРЯДНЫЕ ОПЕРАТОРЫ
// 124 - поразрядный оператор & (и)

/*
int main()
{
unsigned char ch;

do
{
cin >> ch;

// Эта инструкция обнуляет 6-й бит.
ch = ch & 223; // в переменной ch теперь прописная буква
disp_binary(ch);
cout << ch;
cout << "\n\n";

} while (ch != 'Q');

return 0;
}
*/


// 125 - поразрядный оператор | (или)

/*
int main()
{
	unsigned char ch;

	do
	{
		cin >> ch;

		// Эта инструкция делает букву строчной.
		ch = ch | 32; // устанавливаеем 6-й бит
		disp_binary(ch);
		cout << ch;
		cout << "\n\n";

	} while (ch != 'Q');

	return 0;
}
*/


// пораздядный оператор ^ (XOR)


// 126 - поразрядный оператор ~ (не)

/*
int main()
{
	unsigned u;

	cout << "Enter a number between 0 and 255: ";
	cin >> u;

	cout << "Here's the number in binary: ";
	disp_binary(u);

	cout << "Here's the complement of the number: ";
	disp_binary(~u);

	return 0;
}
*/


// 127 - демонстрация выполнения поразрядного сдвига.

/*
int main()
{
	int i = 1, t;
	for (t = 0; t < 8; t++)
	{
		disp_binary(i);
		i = i << 1;
	}

	cout << '\n';

	for (t = 0; t < 8; t++)
	{
		i = i >> 1;
		disp_binary(i);
	}

	return 0;
}
*/


/* 128 - программа использует оператор ? ("знак вопроса") для предотвращения
   деления на нуль. */

/*
int div_zero();

int main()
{
	int i, j, result;

	cout << "Enter dividend and divisor: ";
	cin >> i >> j;

	// Эта инструкция не допустит возникновения ошибки деления на нуль.

	result = j ? i / j : div_zero();

	cout << "Result: " << result << '\n';

	return 0;
}

int div_zero()
{
	cout << "Cannot divide by zero.\n";
	return 0;
}
*/


// 129 - оператор , ("запятая")

/*
int main()
{
	int i, j;
	j = 10;
	i = (j++, j + 100, 999 + j);
	cout << i << '\n';
	return 0;
}
*/


// 130 - демонстрация использования оператора sizeof

int main()
{
	char ch;
	int i;

	cout << sizeof ch << ' '; // размер типа char
	cout << sizeof i << ' '; // размер типа int
	cout << sizeof (float) << ' '; // размер типа float
	cout << sizeof (double) << ' '; // размер типа double

	return 0;
}
/* 122 - ��������� ������������� �������, ������� �����
   ������� ������������� register-���������� ��
   �������� ���������� ���������.
*/

/*
#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

unsigned int i; // �� register-����������
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


// 123 - enumeration (������������)

/*
#include "stdafx.h"

using namespace std;

enum apple
{
	Jonathan, Golden_Del, Red_Del,
	Winesap, Cortland, McIntosh
};

// ������ �����, ��������� � ������������� apple.
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

// ����������� ������������ ����� � �����.
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


// ����������� ���������
// 124 - ����������� �������� & (�)

/*
int main()
{
unsigned char ch;

do
{
cin >> ch;

// ��� ���������� �������� 6-� ���.
ch = ch & 223; // � ���������� ch ������ ��������� �����
disp_binary(ch);
cout << ch;
cout << "\n\n";

} while (ch != 'Q');

return 0;
}
*/


// 125 - ����������� �������� | (���)

/*
int main()
{
	unsigned char ch;

	do
	{
		cin >> ch;

		// ��� ���������� ������ ����� ��������.
		ch = ch | 32; // �������������� 6-� ���
		disp_binary(ch);
		cout << ch;
		cout << "\n\n";

	} while (ch != 'Q');

	return 0;
}
*/


// ����������� �������� ^ (XOR)


// 126 - ����������� �������� ~ (��)

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


// 127 - ������������ ���������� ������������ ������.

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


/* 128 - ��������� ���������� �������� ? ("���� �������") ��� ��������������
   ������� �� ����. */

/*
int div_zero();

int main()
{
	int i, j, result;

	cout << "Enter dividend and divisor: ";
	cin >> i >> j;

	// ��� ���������� �� �������� ������������� ������ ������� �� ����.

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


// 129 - �������� , ("�������")

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


// 130 - ������������ ������������� ��������� sizeof

int main()
{
	char ch;
	int i;

	cout << sizeof ch << ' '; // ������ ���� char
	cout << sizeof i << ' '; // ������ ���� int
	cout << sizeof (float) << ' '; // ������ ���� float
	cout << sizeof (double) << ' '; // ������ ���� double

	return 0;
}
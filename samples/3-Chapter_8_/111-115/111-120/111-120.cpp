// 111 - clrscr()

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

void clrscr(int size = 25);

int main()
{
	int i;

	for (i = 0; i < 30; i++) cout << i << '\n';
	clrscr(); // ������� 25 �����.

	for (i = 0; i < 30; i++) cout << i << '\n';
	clrscr(10); // ������� 10 �����.

	return 0;
}

void clrscr(int size)
{
	for (; size; size--) cout << '\n';
}
*/


// 112 - ���������� ���������������� ������ ������� strcat().

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

void mystrcat(char *s1, char *s2, int len = -1);

int main()
{
	char str1[80] = "This is a test.";
	char str2[80] = "0123456789";

	mystrcat(str1, str2, 5); // ������������ 5 ��������.
	cout << str1 << '\n';

	strcpy_s(str1, "This is a test."); // ��������������� str1.

	mystrcat(str1, str2); // ������������ ��� ������.
	cout << str1 << '\n';

	return 0;
}

// ���������������� ������ ������� strcat().
void mystrcat(char *s1, char *s2, int len)
{
	// ������� ����� ������ s1.
	while (*s1) s1++;
	if (len == -1) len = strlen(s2);

	while(*s2 && len)
	{
		*s1 = *s2; // �������� �������.
		s1++;
		s2++;
		len--;
	}
	*s1 = '\0'; // ��������� ������ s1 ������� ��������.
}
*/


// 113 - ��������������� ���������� ���������� �������.

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

float myfunc(float i);
double myfunc(double i);

int main()
{
	// ��������������� ���, ���������� ������� myfunc(double).
	cout << myfunc(10.1) << ' ';
	
	// ���������������
	cout << myfunc(10);

	return 0;
}

float myfunc(float i)
{
	return i;
}

double myfunc(double i)
{
	return -i;
}
*/


// 114 - ��� ���� ������, ��������� ����������������.

/*
#include "stdafx.h"
#include <iostream>

using namespace std;

char myfunc(unsigned char ch);
char myfunc(char ch);

int main()
{
	cout << myfunc('c') << ' '; // ����� ���������� myfunc(char).
	cout << myfunc(88); // �������� ���������������

	return 0;
}

char myfunc(unsigned char ch)
{
	return ch - 1;
}

char myfunc(char ch)
{
	return ch + 1;
}
*/


// 115 - ��� ���� ���������������
#include "stdafx.h"
#include <iostream>

using namespace std;

int myfunc(int i);
int myfunc(int i, int j = 1);

int main()
{
	cout << myfunc(4, 5) << ' '; // ��������������� ���

	// ���������������
	cout << myfunc(10);

	return 0;
}

int myfunc(int i)
{
	return i;
}

int myfunc(int i, int j)
{
	return i * j;
}
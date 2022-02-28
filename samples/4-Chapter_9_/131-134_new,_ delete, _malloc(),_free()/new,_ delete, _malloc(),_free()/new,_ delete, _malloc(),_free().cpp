#include "stdafx.h"
#include <iostream>

using namespace std;

void pause();

void pause()
{
	cout << '\n';
	system("pause");
}


// 131 - ������������ ��������� � ������������ ������

/*
int main()
{
	int *p;

	p = new int; // �������� ������ ��� int-��������.

	*p = 20; // �������� � ��� ������� ������ �������� 20.

	cout << *p; // ���������� (���� ������ �� �����) � ����������������� ����� ����.

	delete p; // ����������� ������

	pause();
	return 0;
}
*/


// 132 - ������������� ����������� ���������� ������

/*
int main()
{
	int *p;

	p = new int (99); // �������������� ������ ������ 99.
	cout << *p;

	delete p;

	pause();
	return 0;
}
*/


// 133 - ��������� ������ ��� ��������

/*
int main()
{
	int *a[10], i, j, num = 0;

	for (i = 0; i < 10; i++)
		a[i] = new int[10]; // �������� ������ ��� 100-�����������  ���������� �������.

	// ��������� ������ ���������� �� 0 �� 99.
	for (j = 0; j < 10; j++)
		for (i = 0; i < 10; i++)
		{
			a[j][i] = num;
			num++;
		}


	// ������� �� ����� 100-���������� ��������� ������.
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
			cout << a[j][i] << ' ';
		cout << '\n';
	}

	// ������� ��������� ��������
	cout << *a[7];

	cout << '\n';

	cout << a[7][6];

	// ������� ���� 100-���������� ��������� ������.
	for (i = 0; i < 10; i++)
		delete [] a[i]; // �������� ������ ��� 10-����������� �������.

	pause();
	return 0;
}
*/


/*
int main()
{
	double *p;
	int i;

	p = new double[10]; // �������� ������ ��� 10-����������� �������

	// ��������� ������ ���������� �� 100 �� 109.
	for (i = 0; i < 10; i++) p[i] = 100.00 + i;

	// ���������� ���������� �������.
	for (i = 0; i < 10; i++) cout << p[i] << ' ';

	delete[] p; // ������� ���� ������.

	pause();
	return 0;
}
*/


// 134 - ������������ ������������� ������ � ����� C: ������� malloc() � free()

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

	// ������������ ������.
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
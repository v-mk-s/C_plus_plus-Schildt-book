/*#include "stdafx.h"
#include <iostream>

using namespace std;

void f(int *j);

int main()
{
	int i;
	int *p;

	p = &i; // ��������� p ������ �������� ����� ���������� i.

	f(p);

	cout << i << '\n'; // ���������� i ������ �������� ����� 100.

	return 0;
}

void f(int *j)
{
	*j = 100; // ����������, ���������� ���������� j,
			  // ������������� ����� 100.
}
*/


#include "stdafx.h"
#include <iostream>

using namespace std;

void f(int *j);

int main()
{
	int i;

	f(&i);

	cout << i << '\n'; // ���������� i ������ �������� ����� 100.

	return 0;
}

void f(int *j)
{
	*j = 100; // ����������, ���������� ���������� j,
			  // ������������� ����� 100.
}
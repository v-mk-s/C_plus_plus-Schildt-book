#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int i, j;

	i = 10;
	j = 100;

	if (j > 0)
	{
		int i; // ��� ���������� i �������� ��
				//������� ��������� i.

		i = j / 2;
		cout << "inner i: " << i << '\n';
	}

	cout << "outer i: " << i << '\n';

	return 0;
}
/*#include "stdafx.h"
#include <iostream>

using namespace std;

void f(int *j);

int main()
{
	int i;
	int *p;

	p = &i; // Указатель p теперь содержит адрес переменной i.

	f(p);

	cout << i << '\n'; // Переменная i теперь содержит число 100.

	return 0;
}

void f(int *j)
{
	*j = 100; // Переменной, адресуемой указателем j,
			  // присваивается число 100.
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

	cout << i << '\n'; // Переменная i теперь содержит число 100.

	return 0;
}

void f(int *j)
{
	*j = 100; // Переменной, адресуемой указателем j,
			  // присваивается число 100.
}
/* Эта программа содержит две функции: main() и myfunc(). */

#include <iostream>
using namespace std;

void myfunc(); // прототим функции myfunc().

int main()
{
	cout << "In main().";
	myfunc(); // Вызываем функцию myfunc().
	cout << " Back in main().";
	
	return 0;
}

void myfunc()
{
	cout << " Inside myfunc().";
}

/* ��� ��������� �������� ��� �������: main() � myfunc(). */

#include <iostream>
using namespace std;

void myfunc(); // �������� ������� myfunc().

int main()
{
	cout << "In main().";
	myfunc(); // �������� ������� myfunc().
	cout << " Back in main().";
	
	return 0;
}

void myfunc()
{
	cout << " Inside myfunc().";
}

#include <iostream>
using namespace std;

void func();

int main()
{
	int x; // ��������� ���������� ��� ������� main().
	
	x = 10;
	func();
	cout << "\n";
	cout << x; // ��������� ����� 10.
	
	return 0;
}

void func()
{
	int x; // ��������� ����������� ��� ������� func().
	
	x = -199;
	cout << x; // ��������� ����� -199.
}


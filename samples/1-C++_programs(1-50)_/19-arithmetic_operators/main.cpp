#include <iostream>
using namespace std;

int main()
{
	int x, y;
	
	x = 10;
	y = 3;
	cout << x/y; // ����� ���������� ����� 3.
	cout << '\n';
	cout << x%y; // ����� ���������� ����� 1, �.�. ������� �� ������� ������.
	cout << '\n';
	
	x = 1;
	y = 2;
	cout << x/y << " " << x%y; // ����� �������� ����� 0 � 1.
	
	return 0;
}

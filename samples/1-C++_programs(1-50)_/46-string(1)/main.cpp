// ������������� ������� gets() ��� ���������� ������ � ����������.

#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	char str[80];
	
	cout << "Enter a string: ";
	gets(str); // ��������� ������ � ����������.
	cout << "Here is your string: ";
	cout << str;
	
	return 0;
}

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char s[80];
	char *p1;
	
	do {
		p1 = s; // ������������� p1 ��� ������ �������� �����.
		
		cout << "Enter a string: ";
		gets(p1); // ��������� ������.
		// ������� ASCII-�������� ������� �������
		while(*p1) cout << (int) *p1++ << ' ';
		cout << '\n';
	} while (strcmp(s, "done"));
	
	return 0;
}

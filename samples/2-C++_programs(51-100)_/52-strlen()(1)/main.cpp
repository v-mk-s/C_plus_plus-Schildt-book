// Отображение строки в обратном порядке.
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char str[80];
	int i;
	
	cout << "Enter a string: ";
	gets(str);
	
	for(i=strlen(str)-1; i>=0; i--) cout << str[i];
	
	return 0;
}

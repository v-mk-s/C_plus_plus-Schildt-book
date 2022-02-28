#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char str[200];
	
	cout << "Enter a string: ";
	
	gets(str);
	
	cout << "Length is: " << strlen(str);
	
	return 0;
}

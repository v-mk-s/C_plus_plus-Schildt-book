#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char s[80];
	
	for(;;)
	{
		cout << "Enter a string: ";
		gets(s);
		if(!strcmp("quit", s)) break;
	}
	
	return 0;
}

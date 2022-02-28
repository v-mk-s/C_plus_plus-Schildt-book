#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int t, i;
	char text[100][80];
	
	for(t=0; t<100; t++)
	{
		cout << t+1 << ": ";
		gets(text[t]);
		if(!text[t][0]) break; // Выход из цикла по пустой строке.
	}
	
	// Отображение строк на экране.
	for(i=0; i<t; i++) cout << text[i] << '\n';
	
	return 0;
}

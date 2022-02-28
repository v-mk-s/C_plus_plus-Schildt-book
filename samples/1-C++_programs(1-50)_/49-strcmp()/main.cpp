#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

bool password();
int a;
char s[80];

int main()
{
	for(;;)
	{
		if(password()) cout << "Logged on.\n";
		else cout << "Access denied.\n";
		if(!strcmp(s, "password")) break;
	}
	return 0;
}

// Функция возвращает значение true, если пароль принят, и
// значение false в противном случае.
bool password()
{
	cout << "Enter password: ";
	gets(s);
	
	if(strcmp(s, "password"))
	{ // Строки различны.
	cout << "Invalid password.\n";
	return false;
	}
	
	// Сравниваемые строки совпадают.
	return true;
}

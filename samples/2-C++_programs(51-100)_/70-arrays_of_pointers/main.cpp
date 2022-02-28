// Простая памятка по ключевым словам С++.

#include <iostream>
#include <cstring>
using namespace std;

char *keyword[][2] = {
	"for", "for(initialization; condition; icrement)",
	"if", "if(condition) ... else ...",
	"switch", "switch(value) { case-list }",
	"while", "while(condition) ...",
	"do-while", "do {statements} while(expression)",
	"", "" // Спосок должен завершаться нулевыми строками.
};

int main()
{
	char str[80];
	int i;
	
		
	cout << "Enter keyword: ";
	cin >> str;
		
	// Отображаем синтаксис.
	for(i=0; *keyword[i][0]; i++)
		if(!strcmp(keyword[i][0], str))
			cout << keyword[i][1];
			
	return 0;
}

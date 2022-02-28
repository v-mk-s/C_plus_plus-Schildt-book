// Программа разбиение строки на слова: версия
// с использованием индексирования массивов.
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	char str[80];
	char token[80];
	int i, j;
	
	cout << "Enter a sentence: ";
	gets(str);
	
	// Считываем лексему из строки.
	for(i=0; ; i++) {
		
		// Считываем символы до тех пор, пока не встретится либо пробел,
		// либо нулевой символ (произнак завершения строки).
		for(j=0; str[i]!=' ' && str[i]; j++, i++) token[j] = str[i];
		token[j] = '\0'; // Завершаем лексему нулевым символом.
		
		cout << token << '\n';
		if(!str[i]) break;
	}
	
	return 0;
}

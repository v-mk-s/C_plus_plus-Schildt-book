#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i;
	
	// Вывод чисел на экран до нажатия любой клавиши.
	for(i = 0; !kbhit(); i++) cout << i << '\n ';
	
	return 0;
}

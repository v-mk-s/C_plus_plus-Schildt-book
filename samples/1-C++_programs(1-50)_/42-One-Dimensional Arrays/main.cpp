#include <iostream>
using namespace std;

int main()
{
	int sample[10];
	// Эта инструкция резервирует область памяти для 10 элементов типа int.
	
	int t;
	
	// Помещаем в массив значения.
	for(t=0; t<10; ++t) sample[t]=t;
	
	// Отображаем массив.
	for(t=0; t<10; ++t) cout << sample[t] << ' ';
	
	return 0;
}

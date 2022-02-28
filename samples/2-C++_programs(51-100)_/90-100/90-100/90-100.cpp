// random.cpp: определяет точку входа для консольного приложения.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "RAND_MAX = " << RAND_MAX << endl; // константа, хранящая максимальный предел из интервала случайных чисел
	cout << "random number = " << rand() << endl; // запуск генератора случайных чисел
	system("pause");
	return 0;
}
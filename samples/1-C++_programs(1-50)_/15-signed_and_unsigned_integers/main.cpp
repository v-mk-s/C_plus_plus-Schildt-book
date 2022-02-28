#include <iostream>
using namespace std;

/* Эта программа демонстрирует различие между
sighed- и unsighed-значениями целочисленного типа.
*/
int main()
{
	short int i; // короткое int-значение со знаком
	short unsigned int j; // короткое int-значение без знака 
	
	j = 32769;
	i = j;
	cout << i << " " << j;
	
	return 0;
}

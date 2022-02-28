// Пример сравнения указателей.
#include <iostream>
using namespace std;

int main()
{
	int num[10];
	int *start, *end;
	
	start = num;
	end = &num[9];
	
	while(start <= end) {
		cout << "Enter a number: ";
		cin >> *start;
		start++;
	}
	start = num; // Восстановление исчодного значения указателя/
	while(start <= end) {
		cout << *start << ' ';
		start++;
	}
	

}

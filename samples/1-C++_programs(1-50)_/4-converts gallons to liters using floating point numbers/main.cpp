/* Эта программа преобразует галлоны в литры с помощью чисел с плавающей точкой. */

#include <iostream>
using namespace std;

int main()
{
	double gallons, liters;
	
	cout << "Enter number of gallons: ";
	cin >> gallons; // Ввод данных от пользователя.
	
	liters = gallons * 3.7854; // Преобразование в литры.
	
	cout << "Liters: " << liters;
	
	return 0;
}

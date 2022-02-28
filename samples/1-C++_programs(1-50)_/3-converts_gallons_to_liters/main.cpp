// Эта программа преобразует галлоны в литры.

#include <iostream>
using namespace std;

int main()
{
	int gallons, liters;
	
	cout << "Enter number of gallons: ";
	cin >> gallons; // Ввод данных от пользователя.
	
	liters = gallons * 4; // Преобразование в литры.
	
	cout << "Liters: " << liters;
	
	return 0;
}

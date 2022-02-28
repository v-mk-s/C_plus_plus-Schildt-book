// Простая програмаа ведения базы данных служащих.

#include <iostream>
using namespace std;

char name[10][80]; // Массив имён служащих.
char phone[10][20]; // Массив телефонных номеров служащих.
float hours[10]; // Массив часов, отработанных за неделю.
float wage[10]; // Массив окладов.

int menu(), number;
void enter(), report();

int main()
{
	int choice;
	do {
		choice = menu(); // Получаем команду, выбранную пользователем.
		
		switch(choice) {
			case 1: break;
			case 2: enter();
				break;
			case 3: report();
				break;
			default: cout << "Try again.\n\n";
		}
	} while(choice != 1);
	
	return 0;
}

// Функция возвращает команду, выбранную пользователем.
int menu()
{
	int choice;
	
	cout << "1. Quit\n";
	cout << "2. Enter information\n";
	cout << "3. Report information\n";
	cout << "\nChoose one: ";
	cin >> choice;
	
	return choice;
}

// Функция ввода информации в базу данных.
void enter()
{
	int i;
	
	cout << "How many employees: ";
	cin >> number;
	
	for(i=0; i<number; i++) {
		cout << "Enter last name: ";
		cin >> name[i];
		cout << "Enter phone number: ";
		cin >> phone[i];
		cout << "Enter number of hours worked: ";
		cin >> hours[i];
		cout << "Enter wage: ";
		cin >> wage[i];
	}
}

// Отображение отчёта.
void report()
{
	int i;
	
	for(i=0; i<number; i++) {
		cout << name[i] << ' ' << phone[i] << '\n';
		cout << "Pay for the week: " << wage[i] * hours[i];
		cout << "\n\n";
	}
}

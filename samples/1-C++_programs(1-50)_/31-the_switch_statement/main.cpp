// Демонстрация switch-инструкции на примере простой "справочной" состемы.
#include <iostream>
using namespace std;

int main()
{
	int choice;
	
	cout << " Help on:\n\n";
	cout << " 1. for\n";
	cout << " 2. if\n";
	cout << " 3. switch\n\n";
	
	cout << " Enter choice (1-3): ";
	cin >> choice;
	cout << '\n';
	
	switch(choice)
	{
		case 1:
			cout << " for is C++'s most versatile loop.\n";
			break;
		case 2:
			cout << " if is C++'s conditional branch statement.\n";
			break;
		case 3:
			cout << " switch is C++'s multiway branch statement.\n";
		default:
			cout << " You must enter a number between 1 to 3.\n";
	}
	
	return 0;
}

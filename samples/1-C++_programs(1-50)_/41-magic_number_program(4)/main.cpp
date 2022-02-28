// Программа "Угадай магическое число": последняя версия.

#include <iostream>
#include <cstdlib>
using namespace std;

void play(int m);

int main()
{
	int option, magic;
	
	magic = rand();
	
	do
	{
		cout << "1. Get a new magic number\n";
		cout << "2. Play\n";
		cout << "3. Quit\n";
		
		do
		{
			cout << "Enter you choice: ";
			cin >> option;
		}
		while (option<1 || option>3);
		
		switch(option)
		{
			case 1:
				magic = rand();
				break;
			case 2:
				play(magic);
				break;
			case  3:
				cout << "Goodbye\n";
				break;
		}
	}
	while(option!=3);
	
	return 0;
}

// Сыграем в игру.
void play(int m)
{
	int t, x;
	
	for(t=0; t<100; t++)
	{
		cout << "Guess the number: ";
		cin >> x;
		if(x==m)
		{
			cout << "** Right **\n";
			return;
		}
		else
			if (x<m) cout << "Too low.\n";
			else cout << "Too high.\n";
	}
		cout << "You're used up all your guesses. Try again\n";
}

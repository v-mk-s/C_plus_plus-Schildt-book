// Программа "Угадай магическое число".
// 2-е усовершенствование.

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int magic; // магическое число
	int guess; // вариант пользователя
	
	magic = rand(); // Получаем случайное число.
	
	cout << "Enter your guess: ";
	cin >> guess;
	
	if(guess == magic)
	{
		cout << "** Right **\n";
		cout << magic << " is the magic number.\n";
	}
	else
	{
		cout << "...Sorry, you're wrong.";
		if(guess > magic) cout << " Your guess is too high.\n";
		else cout << " Your guess is too low.\n";
	}
	
	return 0;
}

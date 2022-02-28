// Программа "Угадай магическое число".
// 1-е усовершенствование.

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
	
	if(guess == magic) cout << "** Right **";
	else cout << "...Sorry, you're wrong.";
	
	return 0;
}

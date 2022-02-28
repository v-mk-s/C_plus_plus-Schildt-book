// Эта программа выводит алфавит в обратном порядке.

#include <iostream>
using namespace std;

int main()
{
	char letter;
	
	for(letter = 'Z'; letter >= 'A'; letter--)
	cout << letter;
	
	return 0;
}

// ��������� "������ ���������� �����".
// 3-� ������������������.

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int magic; // ���������� �����
	int guess; // ������� ������������
	
	do
	{
		magic = rand(); // �������� ��������� �����.

		cout << "Enter your guess: ";
		cin >> guess;
	
		if(guess == magic)
		{
			cout << "** Right **\n";
			cout << magic << " is the magic number.\n";
		}
		else
		{
			cout << "...Sorry, you're wrong." << magic;
			if(guess > magic) cout << " Your guess is too high.\n";
			else cout << " Your guess is too low.\n";
		}
	} while (guess != magic) ;
	
	return 0;
}

// ��������� "������ ���������� �����".
// 1-� ������������������.

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int magic; // ���������� �����
	int guess; // ������� ������������
	
	magic = rand(); // �������� ��������� �����.
	
	cout << "Enter your guess: ";
	cin >> guess;
	
	if(guess == magic) cout << "** Right **";
	else cout << "...Sorry, you're wrong.";
	
	return 0;
}

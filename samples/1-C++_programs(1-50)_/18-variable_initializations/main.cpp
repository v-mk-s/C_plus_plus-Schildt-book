#include <iostream>
using namespace std;

void total(int x);

int main()
{
	cout << "Computing summation of 5.\n";
	total(5);
	
	cout << "\nComputing summation of 6.\n";
	total(6);
	
	return 0;
}

void total(int x)
{
	int sum = 0; // Инициализируем переменную sum.
	int i, count;
	
	for(i = 1; i <= x; i++)
	{
		sum = sum + i;
		for(count = 0; count < 10; count++) cout << '.';
		cout << "The currect sum is " << sum << '\n';
	}
}


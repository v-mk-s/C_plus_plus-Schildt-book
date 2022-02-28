#include <iostream>
using namespace std;

int main() // Выводим i и значение i/2 с дробной чфстью.
{
	int i;
	
	for(i=1; i<=100; ++i)
	cout << i << " / 2 is: " << (float) i / 2 << '\n';
	
	return 0;
}

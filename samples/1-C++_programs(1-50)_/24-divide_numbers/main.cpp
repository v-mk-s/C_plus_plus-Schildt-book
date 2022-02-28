// Деление первого числа на второе.

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	cout << "Enter two numbers: ";
	cin >> a >> b;
	
	if(b) cout << a/b << '\n';
	else cout << "Cannot divide by zero.";
	
	return 0;
}

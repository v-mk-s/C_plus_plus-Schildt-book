// Эта программа демонстрирует использование функции xor().
#include <iostream>
using namespace std;

bool XOR(bool a, bool b);

int main()
{
	int f;
	for(f = 0; f<4; f++)
	{
		
		bool p, q;
	
		cout << "Enter P (0 or 1): ";
		cin >> p;
		cout << "Enter Q (0 or 1): ";
		cin >> q;
	
		cout << "P AND Q: " << (p && q) << '\n';
		cout << "P OR Q: " << (p || q) << '\n';
		cout << "P XOR Q: " << XOR(p, q) << "\n\n\n";
	}
	return 0;
}

bool XOR(bool a, bool b)
{
	return (a || b) && !(a && b);
}

/* Эта программа выводит все печатаемые символы,
включая расширенный набор символов, если
таковой существует.
*/

#include <iostream>
using namespace std;

int main()
{
	unsigned char ch;
	
	ch = 1;
	while(ch)
	{
		cout << ch << "   ";
		ch++;
	}
	
	return 0;
}

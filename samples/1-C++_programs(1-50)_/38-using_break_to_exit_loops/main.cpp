#include <iostream>
using namespace std;

int main()
{
	int t;
	
	// ���� �������� ��� �������� t �� 0 �� 9, � �� �� 100!
	for(t=0; t<100; t++)
	{
		if(t==10) break;
		cout << t << ' ';
	}
	return 0;
}

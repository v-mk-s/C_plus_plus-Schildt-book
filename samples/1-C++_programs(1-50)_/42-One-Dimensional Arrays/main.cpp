#include <iostream>
using namespace std;

int main()
{
	int sample[10];
	// ��� ���������� ����������� ������� ������ ��� 10 ��������� ���� int.
	
	int t;
	
	// �������� � ������ ��������.
	for(t=0; t<10; ++t) sample[t]=t;
	
	// ���������� ������.
	for(t=0; t<10; ++t) cout << sample[t] << ' ';
	
	return 0;
}

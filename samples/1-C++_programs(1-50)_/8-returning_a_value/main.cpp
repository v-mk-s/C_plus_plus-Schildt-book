// ������������ �������� ��������� ��������.

#include <iostream>
using namespace std;

int mul(int x, int y); // �������� ������� mul().

int main()
{
	int answer;
	
	mul(10,11);
	
	answer = mul(10, 11); // ������������ ��������, ������������� ��������.
	
	cout << "The answer is " << answer;
	
	return 0;
}

// ��� ������� ���������� ��������.
int mul(int x, int y)
{
	return x * y; // ������� ���������� ������������ x � y.
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num;
	double sq_root;
	
	for(num = 1; num < 100; num++)
	{
		sq_root = sqrt((double) num);
		cout << num << " " << sq_root << '\n';
	}
	return 0;
}

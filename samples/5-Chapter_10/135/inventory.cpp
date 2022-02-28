/* �������� ������������� �������
#include <iostream>

using namespace std;

int main()
{
	int *p;
	int c;
	
	cin >> c;
	
	p = new int [c];
	
	
	for (int i = 0; i < c; i++)
		p[i] = i;
	
	for (int i = 0; i < c; i++)
		cout << p[i] << ' ';	
		
	delete [] p;
		
	return 0;
}
*/


/* ������� ��������� ������� ����������� ���������,
� ������� ������������ ������ ��������. */

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>

using namespace std;

const int SIZE = 100;

struct inv_type
{
	char item[40]; // ������������ ������
	double cost; // ���������
	double retail; // ��������� ����
	int on_hand; // ��������� � ������� ����������
	int lead_time; // ����� ���� �� ���������� �������
} invtry[SIZE];

void enter(), init_list(), display(), update(), search(), input(int i);
int menu();

int main()
{
	char choice;
	
	init_list();
	
	for(;;)
	{
		choice = menu();
		switch(choice)
		{
			case 'd': display();
				break;
			case 'e': enter();
				break;
			case 's': search();
				break;
			case 'u': update();
				break;
			case 'c': init_list();
				break;
		    case 'q': return 0;
		}
	}
}

// ������������� ������� ��������.
void init_list()
{
	int t;
	
	// ��� ������� ����� �������� ������ ���.
	for (t = 0; t < SIZE; t++) *invtry[t].item = '\0';
}

// ��������� ������� ����, ��������� �������������.
int menu()
{
	char ch;
	
	cout << '\n';
	do
	{
		cout << "(D)isplay\n"; // ���������� ��� ���������.
		cout << "(E)nter\n"; // ������ ����� �������.
		cout << "(S)earch\n"; // ����� ������.
		cout << "(U)pdate\n"; // �������� �������.
		cout << "(C)lear\n"; // ������� ���� ���������
		cout << "(Q)uit\n\n"; // ����� �� ���������.
		cout << "choose one ";
		cin >> ch;
		cout << '\n';
	} while(!strchr("desucq", tolower(ch)));
	return tolower(ch);
}

// ���� ��������� � ����������� ���������.
void enter()
{
	int i;
	
	// ������� ������ ��������� ���������.
	for (i = 0; i < SIZE; i++)
		if(!*invtry[i].item) break;
	
	// ���� ������ �����, �������� i ����� ����� SIZE.
	if (i == SIZE)
	{
		cout << "List full.\n";
		return;
	}
	
	input(i);
}

// ���� ����������.
void input(int i)
{
	cout << "Item: ";
	cin >> invtry[i].item;
	
	
	cout << "Cost: ";
	cin >> invtry[i].cost;
	
	
	cout << "Retail price: ";
	cin >> invtry[i].retail;
	
	
	cout << "On hand: ";
	cin >> invtry[i].on_hand;
	
	
	cout << "Lead time to resupply (in days): ";
	cin >> invtry[i].lead_time;
}

// ����������� ������������� ��������.
void update()
{
	int i;
	char name[80];
	
	cout << "Enter item: ";
	cin >> name;
	
	for (i = 0; i < SIZE; i++)
		if(!(strcmp(name, invtry[i].item))) break;
		
	if(i == SIZE)
	{
		cout << "Item not found.\n";
		return;
	}
	
	cout << "Enter new information.\n";
	input(i);
}

// ����� ������� ������.
void search()
{
    bool n = true;
	char name[80];
	
	cout << "Enter item: ";
	cin >> name;
	
	for (int i = 0; i < SIZE; i++)
	{
		int j;
		
		for (j = 0; j < strlen(name) - 1; j++)
			if (name[j] != invtry[i].item[j]) break;
			
		if (name[j] != invtry[i].item[j]) continue;
		
		cout << invtry[i].item;
		cout << "\nCost: $" << invtry[i].cost;
		cout << "\nRetail: $" << invtry[i].retail;
		cout << "\nOn hand: " << invtry[i].on_hand;
		cout << "\nResupply: " << invtry[i].lead_time << " days\n\n";
		
		if (n) n = false;
		
	}
	
	if (n) cout << "Item not found.\n\n";		
}

// ����������� �� ������ ������������ ���������
void display()
{
	int t;
	
	for (t = 0; t < SIZE; t++)
		if(*invtry[t].item)
		{
			cout << invtry[t].item;
			cout << "\nCost: $" << invtry[t].cost;
			cout << "\nRetail: $" << invtry[t].retail;
			cout << "\nOn hand: " << invtry[t].on_hand;
			cout << "\nResupply: " << invtry[t].lead_time << " days\n\n";
		}
}

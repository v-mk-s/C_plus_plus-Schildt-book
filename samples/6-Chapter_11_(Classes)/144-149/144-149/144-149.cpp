#include "stdafx.h"

// 144 - ����� queue
/*
#include <iostream>

using namespace std;

// �������� ������ queue
class queue
{
	int q[100];
	int sloc, rloc;
public:
	void init();
	void qput(int i);
	int qget();
};

// ������������� ������ queue
void queue::init()
{
	rloc = sloc = 0;
}

// ��������� � ������� �������������� ��������
void queue::qput(int i)
{
	if (sloc == 100)
	{
		cout << "Queue is full.\n";
		return;
	}
	sloc++;
	q[sloc] = i;
}

// ���������� �� ������� �������������� ��������
int queue::qget()
{
	if (rloc == sloc)
	{
		cout << "Queue underflow.\n";
		return 0;
	}
	rloc++;
	return q[rloc];
}

int main()
{
	queue a, b; // �������� ���� �������� ������ queue

	a.init();
	b.init();

	a.qput(10);
	b.qput(19);

	a.qput(20);
	b.qput(1);

	cout << "Contents of queue a: ";
	cout << a.qget() << ' ';
	cout << a.qget() << '\n';

	cout << "Contents of queue b: ";
	cout << b.qget() << ' ';
	cout << b.qget() << '\n';


	return 0;
}
*/


// 145 - ������������ ������� � ������ ������
/*
#include <iostream>

using namespace std;

class myclass
{
	int a; // �������� ������
public:
	int b; // �������� ������
	void setab(int i); // �������� �������
	int geta();
	void reset();
};

void myclass::setab(int i)
{
	a = i; // ������ ��������� � ���������� a
	b = i * i; // ������ ��������� � ���������� b
}

int myclass::geta()
{
	return a; // ������ ��������� � ����������� a
}

void myclass::reset()
{
	setab(0); // ������ ����� ������� setab() ��� ��� ���������� �������
}

int main()
{
	myclass ob;

	ob.setab(5); // ������������� ����� ������ ob.a � ob.b
	cout << "ob after setab(5): ";
	cout << ob.geta() << ' ';
	cout << ob.b; // � ����� b ����� �������� ������ ������,
				  // ��������� �� �������� public-������.
	cout << '\n';

	ob.b = 20; // ���� b ����� ���������� ��������, ��������� �� �������� public-������.
	cout << "ob after ob.b = 20: ";
	cout << ob.geta() << ' ';
	cout << ob.b;
	cout << '\n';

	ob.reset();
	cout << "ob after ob.reset(): ";
	cout << ob.geta() << ' ';
	cout << ob.b;
	cout << '\n';

	return 0;
}
*/


// 146 - ������������ ������������� ������������ � �����������.
/*
#include <iostream>

using namespace std;

// ����������� ������ queue
class queue
{
	int q[100];
	int sloc, rloc;
public:
	queue(); // �����������
	~queue(); // ����������
	void qput(int i);
	int qget();
};

// ����������� ������������.
queue::queue()
{
	rloc = sloc = 0;
	cout << "Queue initialized.\n";
}

// ����������� �����������.
queue::~queue()
{
	cout << "Queue destroyed.\n";
}

// ��������� � ������� �������������� ��������
void queue::qput(int i)
{
	if (sloc == 100)
	{
		cout << "Queue is full.\n";
		return;
	}
	sloc++;
	q[sloc] = i;
}

// ���������� �� ������� �������������� ��������
int queue::qget()
{
	if (rloc == sloc)
	{
		cout << "Queue underflow.\n";
		return 0;
	}
	rloc++;
	return q[rloc];
}

int main()
{
	queue a, b; // �������� ���� �������� ������ queue

	a.qput(10);
	b.qput(19);

	a.qput(20);
	b.qput(1);

	cout << a.qget() << ' ';
	cout << a.qget() << ' ';
	cout << b.qget() << ' ';
	cout << b.qget() << '\n';


	return 0;
}
*/


// 147 - ������������� ������������������ ������������.
/*
#include <iostream>

using namespace std;

// ����������� ������ queue
class queue
{
	int q[100];
	int sloc, rloc;
	int who; // �������� ����������������� ����� �������
public:
	queue(int id); // ����������������� �����������
	~queue(); // ����������
	void qput(int i);
	int qget();
};

// ����������� ������������.
queue::queue(int id)
{
	rloc = sloc = 0;
	who = id;
	cout << "Queue " << who << " initialized.\n";
}

// ����������� �����������.
queue::~queue()
{
	cout << "Queue " << who << " destroyed.\n";
}

// ��������� � ������� �������������� ��������
void queue::qput(int i)
{
	if (sloc == 100)
	{
		cout << "Queue is full.\n";
		return;
	}
	sloc++;
	q[sloc] = i;
}

// ���������� �� ������� �������������� ��������
int queue::qget()
{
	if (rloc == sloc)
	{
		cout << "Queue underflow.\n";
		return 0;
	}
	rloc++;
	return q[rloc];
}

int main()
{
	queue a(1), b(2); // �������� ���� �������� ������ queue

	a.qput(10);
	b.qput(19);

	a.qput(20);
	b.qput(1);

	cout << a.qget() << ' ';
	cout << a.qget() << ' ';
	cout << b.qget() << ' ';
	cout << b.qget() << '\n';


	return 0;
}
*/


// 148 - �������� ���� �������� �������� ���� widget
/*
#include <iostream>

using namespace std;

class widget
{
	int i;
	int j;
public:
	widget(int a, int b);
	void put_widget();
};

// ������� 2 ��������� ������������ widget().
widget::widget(int a, int b)
{
	i = a;
	j = b;
}

void widget::put_widget()
{
	cout << i << ' ' << j << '\n';
}

int main()
{
	widget x(10, 20), y(0, 0);

	x.put_widget();
	y.put_widget();

	return 0;
}
*/


// 149 - �������������� ������� ������������� �������

#include <iostream>

using namespace std;

class myclass
{
	int a;
public:
	myclass(int x);
	int get_a();
};

myclass::myclass(int x)
{
	a = x;
}

int myclass::get_a()
{
	return a;
}

int main()
{
	myclass ob(4); // ����� ������� myclass(4)

	cout << ob.get_a();

	return 0;
}

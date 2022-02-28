#include "stdafx.h"
// 160 - ������������ ������������� �������-"�����"
/*
#include <iostream>

using namespace std;

class myclass
{
	int a, b;
public:
	myclass(int i, int j)
	{
		a = i;
		b = j;
	}
	friend int sum(myclass &x); // ������� sum() - "����" ������ myclass.
};


class myclass1
{
	int a, b;
public:
	myclass1(int i, int j)
	{
		a = i;
		b = j;
	}
	friend int sum(myclass1 &x); // ������� sum() - "����" ������ myclass.
};

// �������� �������� �� ��, ��� ������� sum()
// �� �������� ������ �� ������ ������.
int sum(myclass &x)
{
	/* ��������� ������� sum() - "����" ������ myclass,
	   ��� ����� ����� �� ������ ������ � ���
	   ������ ������ a � b. *
	return x.a + x.b;
}

int sum(myclass1 &x)
{
	return x.a + x.b;
}

int main()
{
	myclass n(3, 4);
	myclass1 n1(5, 4);

	cout << sum(n) << '\n' << sum(n1) << '\n'
		<< sum(n) << '\n';

	return 0;
}
*/


// 161 - ������������� �������-"�����"
/*
#include <iostream>

using namespace std;

const int IDLE = 0;
const int INUSE = 1;

class C2; // ����������� ����������
class C1
{
	int status; // IDLE, ���� ��������� ���������,
				// INUSE, ���� ��������� �������� �� �����.
	// ...
public: void set_status(int state);
		friend int idle(C1 a, C2 b);
};

class C2
{
	int status; // IDLE, ���� ��������� ���������,
				// INUSE, ���� ��������� �������� �� �����.
				// ...
public: void set_status(int state);
		friend int idle(C1 a, C2 b);
};

void C1::set_status(int state)
{
	status = state;
}

void C2::set_status(int state)
{
	status = state;
}

// ������� idle() - "����" ��� ������� C1 � C2.
int idle(C1 a, C2 b)
{
	if (a.status || b.status) return 0;
	else return 1;
}

int main()
{
	C1 x;
	C2 y;

	x.set_status(IDLE);
	y.set_status(IDLE);

	if (idle(x, y)) cout << "Screen Can Be Used.\n";
	else cout << "Pop-up In Use.\n";

	x.set_status(INUSE);

	if (idle(x, y)) cout << "Screen Can Be Used.\n";
	else cout << "Pop-up In Use.\n";

	return 0;
}
*/


// 162 - ������� ����� ���� ������ ������ ������ � ������������ "������" �������. 
/*
#include <iostream>

using namespace std;

const int IDLE = 0;
const int INUSE = 1;

class C2; // ����������� ����������
class C1
{
	int status; // IDLE, ���� ��������� ���������,
				// INUSE, ���� ��������� �������� �� �����.
				// ...
public:
	void set_status(int state);
	int idle(C2 b); // ������ ��� ���� ������ C1
};

class C2
{
	int status; // IDLE, ���� ��������� ���������,
				// INUSE, ���� ��������� �������� �� �����.
				// ...
public:
	void set_status(int state);
	friend int C1::idle(C2 b); // �������-"����"
};

void C1::set_status(int state)
{
	status = state;
}

void C2::set_status(int state)
{
	status = state;
}

// ������� idle() - ���� ������ �1 � "����" ������ C2.
int C1::idle(C2 b)
{
	if (status || b.status) return 0;
	else return 1;
}

int main()
{
	C1 x;
	C2 y;

	x.set_status(IDLE);
	y.set_status(IDLE);

	if (x.idle(y)) cout << "Screen Can Be Used.\n";
	else cout << "Pop-up In Use.\n";

	x.set_status(INUSE);

	if (x.idle(y)) cout << "Screen Can Be Used.\n";
	else cout << "Pop-up In Use.\n";

	return 0;
}
*/


// 163 - ������������� ������������� �������������.
/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class timer
{
	int seconds;
public:
	// �������, ���������� � ���� ������
	timer(char *t)
	{
		seconds = atoi(t);
	}

	// �������, ���������� � ���� ������ �����
	timer(int t)
	{
		seconds = t;
	}

	// �����, ���������� � ������� � ��������
	timer(int min, int sec)
	{
		seconds = min * 60 + sec;
	}

	void run();
};

void timer::run()
{
	clock_t t1;

	t1 = clock();

	while (((clock() - t1) / CLOCKS_PER_SEC) < seconds);
	cout << '\a'; // �������� ������
}

int main()
{
	timer a(10), b("20"), c(1, 10);

	a.run(); // ������ 10 ������
	b.run(); // ������ 20 ������
	c.run(); // ������ 1 ������ 10 ������

	return 0;
}
*/


// 164 - ������������ ������������ �������������
/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class timer
{
	int seconds;
public:
	// �������, ���������� � ���� ������
	timer(char *t)
	{
		seconds = atoi(t);
	}

	// �������, ���������� � ���� ������ �����
	timer(int t)
	{
		seconds = t;
	}

	// �����, ���������� � ������� � ��������
	timer(int min, int sec)
	{
		seconds = min * 60 + sec;
	}

	void run();
};

void timer::run()
{
	clock_t t1;

	t1 = clock();

	while (((clock() - t1) / CLOCKS_PER_SEC) < seconds)
	{
		cout << clock() << '\n';
	};
	cout << '\a'; // �������� ������
}

int main()
{
	timer a(10);

	a.run();

	cout << "Enter number of seconds: ";
	char str[80];
	cin >> str;
	timer b(str); // ������������� � ��������
	b.run();

	cout << "Enter minutes and secons: ";
	int min, sec;
	cin >> min >> sec;
	timer c(min, sec); // ������������� � ��������
	c.run();

	return 0;
}
*/


// 165 - ������������ ��������
/*
#include <iostream>

using namespace std;

class myclass
{
	int a, b;
public:
	void setab(int i, int j) { a = i, b = j; }
	void showab();
};

void myclass::showab()
{
	cout << "a is " << a << '\n';
	cout << "b is " << b << '\n';
}

int main()
{
	myclass ob1, ob2;

	ob1.setab(10, 20);
	ob2.setab(0, 0);
	cout << "ob1 before assignment: \n";
	ob1.showab();
	cout << "ob2 before assignment: \n";
	ob2.showab();
	cout << '\n';

	ob2 = ob1; // ����������� ������ ob1 ������� ob2

	cout << "ob1 after assignment: \n";
	ob1.showab();
	cout << "ob2 after assignment: \n";
	ob2.showab();

	return 0;
}
*/


// 166 - �������� �������� ��������
/*
#include <iostream>
using namespace std;

class OBJ
{
	int i;
public:
	void set_i(int x) { i = x; }
	void out_i() { cout << i << ' '; }
};

void f(OBJ x)
{
	x.out_i(); // ������� �����
	x.set_i(100); // ������������� ������ ��������� �����
	x.out_i(); // ������� ����� 100
}

int main()
{
	OBJ o;
	o.set_i(10);
	f(o);
	o.out_i(); // ��-�������� ������� ����� 10,
			   // �������� ���������� i �� ����������

	return 0;
}
*/


/*
#include <iostream>
using namespace std;

class OBJ;
void f(OBJ &x);

class OBJ
{
int i;
public:
void set_i(int x) { i = x; }
void out_i() { cout << i << ' '; }
};

void f(OBJ &x)
{
x.out_i(); // ������� �����
x.set_i(100); // ������������� ������ ��������� �����
x.out_i(); // ������� ����� 100
}

int main()
{
OBJ o;
o.set_i(10);
f(o);
o.out_i(); // ��-�������� ������� ����� 10,
// �������� ���������� i �� ����������

return 0;
}
*/


// 167 - ������������, ����������� � �������� ��������
/*
#include <iostream>

using namespace std;

class myclass
{
	int val;
public:
	myclass(int i) { val = i; cout << "Constructing\n"; }
	~myclass() { cout << "Destructing\n"; }
	int getval() { return val; }
};

void display(myclass ob)
{
	cout << ob.getval() << '\n';
}

int main()
{
	myclass a(10);

	display(a);

	return 0;
}
*/


// 168 - ��������, ��������� ��� �������� �������� ��������
// (������� �������������� ������)
/*
#include <iostream>

using namespace std;

class myclass
{
	int *p;
public:
	myclass(int i);
	~myclass();
	int getval() { return *p; }
};

myclass::myclass(int i)
{
	cout << "Allocating\n";
	p = new int;
	*p = i;
}

myclass::~myclass()
{
	cout << "Freeing\n";
	delete p;
}

// ��� ���������� ���� ������� � ��������� ��������.
void display(myclass ob)
{
	cout << ob.getval() << '\n';
}

int main()
{
	myclass a(10);

	display(a);

	return 0;
}
*/


// 169 - ���� �� ������� �������� �������� ��������
/*
#include <iostream>

using namespace std;

class myclass
{
	int *p;
public:
	myclass(int i);
	~myclass();
	int getval() { return *p; }
};

myclass::myclass(int i)
{
	cout << "Allocating\n";
	p = new int;
	*p = i;
}

myclass::~myclass()
{
	cout << "Freeing\n";
	delete p;
}

// ��� ������� �� ������ �������.
// ��������� ������ ob ������ ��������� �� ������, �����
// ��������� �� ��������, � �������������, ������ ��
// ������� �� ������� ��������� �� ���������� ������� display().
void display(myclass &ob)
{
	cout << ob.getval() << '\n';
}

int main()
{
	myclass a(10);

	display(a);

	return 0;
}
*/


// 170 - ������������� �������, ������� ���������� ������.
/*
#include <iostream>
#include <cstring>

using namespace std;

class sample
{
	char s[80];
public:
	void show() { cout << s << '\n'; }
	void set(char*str) { strcpy(s, str); }
};

// ��� ������� ���������� ������ ���� sample.
sample input()
{
	char instr[80];
	sample str;
	cout << "Enter a string: ";
	cin >> instr;

	str.set(instr);

	return str;
}

int main()
{
	sample ob;

	// ����������� ������, ������������ 
	// �������� input(), ������� ob.
	ob = input();
	ob.show();

	return 0;
}
*/


// 171 - ������, ����������� ��� ����������� ������� ��������
/*
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class sample
{
	char *s;
public:
	sample() { s = 0; }
	~sample()
	{
		if (s) delete[] s;
		cout << "Freeing s\n";
	}
	void show() { cout << s << '\n'; }
	void set(char *str);
};

// �������� ������.
void sample::set(char *str)
{
	s = new char[strlen(str) + 1];
	strcpy(s, str);
}

// ��� ������� ���������� ������ ���� sample.
sample input()
{
	char instr[80];
	sample str;
	cout << "Enter a string: ";
	cin >> instr;

	str.set(instr);

	return str;
}

int main()
{
	sample ob;

	// ����������� ������, ������������ 
	// �������� input(), ������� ob.
	ob = input(); // ��� ���������� ���������� ������!!!!
	ob.show(); // ����������� "������"

	return 0;
}
*/


// 172 - ������������� ������������ ����� ��� ����������� ���������.
/*
#include <iostream>
#include <cstdlib>

using namespace std;

class myclass
{
	int *p;
public:
	myclass(int i);				// ������� �����������
	myclass(const myclass &ob); // ����������� �����
	~myclass();
	int getval() { return *p; }
};

// ����������� �����
myclass::myclass(const myclass &ob)
{
	p = new int;
	*p = *ob.p; // �������� �����
	cout << "Copy constructor called.\n";
}

// ������� �����������
myclass::myclass(int i)
{
	cout << "Allocating p\n";
	p = new int;
	*p = i;
}

myclass::~myclass()
{
	cout << "Freeing p\n";
	delete p;
}

// ��� ������� ��������� ���� ������-��������.
void display(myclass ob)
{
	cout << ob.getval() << '\n';
}

int main()
{
	myclass a(10);

	display(a);

	return 0;
}
*/


// 173 - ����� ������������ ����� ��� �������������� �������
/*
#include <iostream>
#include <cstdlib>

using namespace std;

class myclass
{
	int *p;
public:
	myclass(int i);				// ������� �����������
	myclass(const myclass &ob); // ����������� �����
	~myclass();
	int getval() { return *p; }
};

// ����������� �����
myclass::myclass(const myclass &ob)
{
	p = new int;
	*p = *ob.p; // �������� �����
	cout << "Copy constructor allocating p.\n";
}

// ������� �����������
myclass::myclass(int i)
{
	cout << "Normal constructor allocating p.\n";
	p = new int;
	*p = i;
}

myclass::~myclass()
{
	cout << "Freeing p\n";
	delete p;
}

int main()
{
	myclass a(10); // ���������� ������� �����������

	// ������������� !!!
	myclass b = a; // ���������� ����������� �����

	myclass c(5), d(3);

	
	// ������������ !!!
	// c = d; // ���������� ������� �����������, � �� ����������� �����

	return 0;
}
*/


// 174 - ����� ������������ ����� ��� ����������� �������� �������
/*
#include <iostream>

using namespace std;

class myclass
{
public:
	myclass() { cout << "Normal constructor.\n"; }
	myclass(const myclass &obj) { cout << "Copy constructor.\n"; }
	~myclass() { cout << "Freeing p\n"; }
};

myclass f()
{
	myclass ob; // ���������� ������� ����������� 
	return ob; // ������ ���������� ����������� �����
}

int main()
{
	myclass a; // ���������� ������� �����������

	a = f(); // ���������� ����������� ����� 

	return 0;
}
*/


// 175 - �������� ����� this

#include <iostream>

using namespace std;

class cl
{
	int i;
public:
	void load_i(int val) { this->i = val; } // �� �� �����, ��� i = val
	int get_i() { return this->i; } // �� �� �����, ��� return i
};

int main()
{
	cl o;

	o.load_i(100);
	cout << o.get_i();

	return 0;
}
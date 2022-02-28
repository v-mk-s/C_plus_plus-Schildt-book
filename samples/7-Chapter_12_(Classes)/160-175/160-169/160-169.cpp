#include "stdafx.h"
// 160 - демонстрация использования функции-"друга"
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
	friend int sum(myclass &x); // функция sum() - "друг" класса myclass.
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
	friend int sum(myclass1 &x); // функция sum() - "друг" класса myclass.
};

// Обратите внимание на то, что функция sum()
// не является членом ни одного класса.
int sum(myclass &x)
{
	/* Поскольку функция sum() - "друг" класса myclass,
	   она имеет право на прямой доступ к его
	   членам данных a и b. *
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


// 161 - использование функции-"друга"
/*
#include <iostream>

using namespace std;

const int IDLE = 0;
const int INUSE = 1;

class C2; // опережающее объявление
class C1
{
	int status; // IDLE, если сообщение неактивно,
				// INUSE, если сообщение выведено на экран.
	// ...
public: void set_status(int state);
		friend int idle(C1 a, C2 b);
};

class C2
{
	int status; // IDLE, если сообщение неактивно,
				// INUSE, если сообщение выведено на экран.
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

// функция idle() - "друг" для классов C1 и C2.
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


// 162 - Функция может быть членом одного класса и одновременно "другом" другого. 
/*
#include <iostream>

using namespace std;

const int IDLE = 0;
const int INUSE = 1;

class C2; // опережающее объявление
class C1
{
	int status; // IDLE, если сообщение неактивно,
				// INUSE, если сообщение выведено на экран.
				// ...
public:
	void set_status(int state);
	int idle(C2 b); // теперь это член класса C1
};

class C2
{
	int status; // IDLE, если сообщение неактивно,
				// INUSE, если сообщение выведено на экран.
				// ...
public:
	void set_status(int state);
	friend int C1::idle(C2 b); // функция-"друг"
};

void C1::set_status(int state)
{
	status = state;
}

void C2::set_status(int state)
{
	status = state;
}

// функция idle() - член класса С1 и "друг" класса C2.
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


// 163 - использование перегруженных конструкторов.
/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class timer
{
	int seconds;
public:
	// секунды, задаваемые в виде строки
	timer(char *t)
	{
		seconds = atoi(t);
	}

	// секунды, задаваемые в виде целого числа
	timer(int t)
	{
		seconds = t;
	}

	// время, задаваемое в минутах и секундах
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
	cout << '\a'; // звуковой сигнал
}

int main()
{
	timer a(10), b("20"), c(1, 10);

	a.run(); // отсчёт 10 секунд
	b.run(); // отсчёт 20 секунд
	c.run(); // отсчёт 1 минуты 10 секунд

	return 0;
}
*/


// 164 - демонстрация динамической инициализации
/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class timer
{
	int seconds;
public:
	// секунды, задаваемые в виде строки
	timer(char *t)
	{
		seconds = atoi(t);
	}

	// секунды, задаваемые в виде целого числа
	timer(int t)
	{
		seconds = t;
	}

	// время, задаваемое в минутах и секундах
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
	cout << '\a'; // звуковой сигнал
}

int main()
{
	timer a(10);

	a.run();

	cout << "Enter number of seconds: ";
	char str[80];
	cin >> str;
	timer b(str); // инициализация в динамике
	b.run();

	cout << "Enter minutes and secons: ";
	int min, sec;
	cin >> min >> sec;
	timer c(min, sec); // инициализация в динамике
	c.run();

	return 0;
}
*/


// 165 - присваивание объектов
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

	ob2 = ob1; // присваиваем объект ob1 объекту ob2

	cout << "ob1 after assignment: \n";
	ob1.showab();
	cout << "ob2 after assignment: \n";
	ob2.showab();

	return 0;
}
*/


// 166 - передача объектов функциям
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
	x.out_i(); // выводит число
	x.set_i(100); // устанавливает только локальную копию
	x.out_i(); // выводит число 100
}

int main()
{
	OBJ o;
	o.set_i(10);
	f(o);
	o.out_i(); // по-прежнему выводит число 10,
			   // значение переменной i не изменилось

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
x.out_i(); // выводит число
x.set_i(100); // устанавливает только локальную копию
x.out_i(); // выводит число 100
}

int main()
{
OBJ o;
o.set_i(10);
f(o);
o.out_i(); // по-прежнему выводит число 10,
// значение переменной i не изменилось

return 0;
}
*/


// 167 - констуркторы, деструкторы и передача объектов
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


// 168 - проблема, возможная при передаче объектов функциям
// (имеется принципиальная ошибка)
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

// При выполнении этой функции и возникает проблема.
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


// 169 - одно из решений проблемы передачи объектов
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

// Эта функция НЕ создаёт проблем.
// Поскольку объект ob теперь передаётся по ссылке, копия
// аргумента не создаётся, а следовательно, объект не
// выходит из области видимости по завершении функции display().
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


// 170 - Использование функции, которая возвращает объект.
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

// Эта функция возвращает объект типа sample.
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

	// Присваиваем объект, возвращаемый 
	// функцией input(), объекту ob.
	ob = input();
	ob.show();

	return 0;
}
*/


// 171 - ошибка, возникающая при возвращении объекта функцией
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

// Загрузка строки.
void sample::set(char *str)
{
	s = new char[strlen(str) + 1];
	strcpy(s, str);
}

// Эта функция возвращает объект типа sample.
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

	// Присваиваем объект, возвращаемый 
	// функцией input(), объекту ob.
	ob = input(); // Эта инструкция генерирует ошибку!!!!
	ob.show(); // отображение "мусора"

	return 0;
}
*/


// 172 - Использование конструктора копии для определения параметра.
/*
#include <iostream>
#include <cstdlib>

using namespace std;

class myclass
{
	int *p;
public:
	myclass(int i);				// обычный конструктор
	myclass(const myclass &ob); // конструктор копии
	~myclass();
	int getval() { return *p; }
};

// конструктор копии
myclass::myclass(const myclass &ob)
{
	p = new int;
	*p = *ob.p; // значение копии
	cout << "Copy constructor called.\n";
}

// обычный констурктор
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

// Эта функция принимает один объект-параметр.
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


// 173 - вызов конструктора копии для инициальизации объекта
/*
#include <iostream>
#include <cstdlib>

using namespace std;

class myclass
{
	int *p;
public:
	myclass(int i);				// обычный конструктор
	myclass(const myclass &ob); // конструктор копии
	~myclass();
	int getval() { return *p; }
};

// конструктор копии
myclass::myclass(const myclass &ob)
{
	p = new int;
	*p = *ob.p; // значение копии
	cout << "Copy constructor allocating p.\n";
}

// обычный констурктор
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
	myclass a(10); // вызывается обычный конструктор

	// ИНИЦИАЛИЗАЦИЯ !!!
	myclass b = a; // вызывается конструктор копии

	myclass c(5), d(3);

	
	// ПРИСВАЕВАНИЕ !!!
	// c = d; // вызывается обычный конструктор, а не конструктор копии

	return 0;
}
*/


// 174 - вызов конструктора копии при возвращении функцией объекта
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
	myclass ob; // вызывается обычный конструктор 
	return ob; // неявно вызывается конструктор копии
}

int main()
{
	myclass a; // вызывается обычный конструктор

	a = f(); // вызывается конструктор копии 

	return 0;
}
*/


// 175 - ключевое слово this

#include <iostream>

using namespace std;

class cl
{
	int i;
public:
	void load_i(int val) { this->i = val; } // то зе самое, что i = val
	int get_i() { return this->i; } // то же самое, что return i
};

int main()
{
	cl o;

	o.load_i(100);
	cout << o.get_i();

	return 0;
}
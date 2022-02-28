#include "stdafx.h"

// 144 - класс queue
/*
#include <iostream>

using namespace std;

// Создание класса queue
class queue
{
	int q[100];
	int sloc, rloc;
public:
	void init();
	void qput(int i);
	int qget();
};

// Инициализация класса queue
void queue::init()
{
	rloc = sloc = 0;
}

// Занесение в очередь целочисленного значения
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

// Извлечение из очереди целочисленного значения
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
	queue a, b; // Создание двух объектов класса queue

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


// 145 - демонстрация доступа к членам класса
/*
#include <iostream>

using namespace std;

class myclass
{
	int a; // закрытые данные
public:
	int b; // открытые данные
	void setab(int i); // открытые функции
	int geta();
	void reset();
};

void myclass::setab(int i)
{
	a = i; // прямое обращение к переменной a
	b = i * i; // прямое обращение к переменной b
}

int myclass::geta()
{
	return a; // прямое обращение к преременной a
}

void myclass::reset()
{
	setab(0); // прямой вызов функции setab() для уже известного объекта
}

int main()
{
	myclass ob;

	ob.setab(5); // Устанавливаем члены данных ob.a и ob.b
	cout << "ob after setab(5): ";
	cout << ob.geta() << ' ';
	cout << ob.b; // К члену b можно получить прямой доступ,
				  // поскольку он является public-членом.
	cout << '\n';

	ob.b = 20; // Член b можно установить напрямую, поскольку он является public-членом.
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


// 146 - Демонстрация использования конструктора и деструктора.
/*
#include <iostream>

using namespace std;

// определение класса queue
class queue
{
	int q[100];
	int sloc, rloc;
public:
	queue(); // конструктор
	~queue(); // деструктор
	void qput(int i);
	int qget();
};

// Определение конструктора.
queue::queue()
{
	rloc = sloc = 0;
	cout << "Queue initialized.\n";
}

// Определение деструктора.
queue::~queue()
{
	cout << "Queue destroyed.\n";
}

// Занесение в очередь целочисленного значения
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

// Извлечение из очереди целочисленного значения
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
	queue a, b; // Создание двух объектов класса queue

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


// 147 - использование параметризованного конструктора.
/*
#include <iostream>

using namespace std;

// определение класса queue
class queue
{
	int q[100];
	int sloc, rloc;
	int who; // содержит идентификационный номер очереди
public:
	queue(int id); // параметризованный конструктор
	~queue(); // деструктор
	void qput(int i);
	int qget();
};

// Определение конструктора.
queue::queue(int id)
{
	rloc = sloc = 0;
	who = id;
	cout << "Queue " << who << " initialized.\n";
}

// Определение деструктора.
queue::~queue()
{
	cout << "Queue " << who << " destroyed.\n";
}

// Занесение в очередь целочисленного значения
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

// Извлечение из очереди целочисленного значения
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
	queue a(1), b(2); // Создание двух объектов класса queue

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


// 148 - передача двух значений объектам типа widget
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

// Передаём 2 аргумента конструктору widget().
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


// 149 - альтернативный вариант инициальзации объекта

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
	myclass ob(4); // вызов функции myclass(4)

	cout << ob.get_a();

	return 0;
}

// 136 - передача функции структуры в качестве аргумента
/*
#include <iostream>

using namespace std;

// Определяем тип структуры.
struct sample
{
	int a;
	char ch;
};

void f1(sample parm);

int main()
{
	sample arg; // Объявляем переменную arg типа sample.
	
	arg.a = 1000;
	arg.ch = 'X';
	
	f1(arg);
	
	return 0;
}

void f1(sample parm)
{
	cout << parm.a << ' ' << parm.ch << '\n';
}
*/


// 137 - присваивание структур
/*
#include <iostream>

using namespace std;

struct stype
{
	int a, b;
};

int main()
{
	stype svar1, svar2;
	
	svar1.a = svar1.b = 10;
	svar2.a = svar2.b = 20;
	
	cout << "Structures before assignment.\n";
	cout << "svar1: " << svar1.a << ' ' << svar1.b;
	cout << '\n';
	cout << "svar2: " << svar2.a << ' ' << svar2.b;
	cout << "\n\n";
	
	svar2 = svar1; // присваивание структур
	
	cout << "Structures after assignment.\n";
	cout << "svar1: " << svar1.a << ' ' << svar1.b;
	cout << '\n';
	cout << "svar2: " << svar2.a << ' ' << svar2.b;
	
	return 0;
}
*/


// 138 - эта программа отображает текущее системное время.

#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
 	tm *ptr;
	time_t lt;
	
	lt = time('\0');
	ptr = localtime(&lt);
	
	while (localtime(&lt))	
		if (lt != time('\0'))
		{
			system("cls");
			
			lt = time('\0');
			
			cout << lt / 1000000000 << ' ';
			cout << (lt % 1000000000) / 1000000 << ' ';
			cout << (lt % 1000000) / 1000 << ' ';
			cout << lt % 1000 << '\n';
			cout << 2000000000 - lt << '\n';
			
			if (ptr -> tm_hour < 10) cout << '0';
		    cout << ptr -> tm_hour << ':';
			if (ptr -> tm_min < 10) cout << '0';
			cout << ptr -> tm_min << ':';
			if (ptr -> tm_sec < 10) cout << '0';
 	 	    cout << ptr -> tm_sec << '\n';
 	 	    
 	 	    cout << asctime(ptr) << "\n\n";
		}      
	
	return 0;
}


// 139 - отображение текущего системного времени
/*
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
 	tm *ptr;
	time_t lt;
	
	lt = time('\0');
	ptr = localtime(&lt);
	cout << asctime(ptr);
	
	return 0;
}
*/


// 140 - использование ссылки на структуру.
/*
#include <iostream>

using namespace std;

struct mystruct
{
	int a, b;
};

mystruct &f(mystruct &var);

int main()
{
	mystruct x, y;
	
	x.a = 10;
	x.b = 20;
	
	cout << "Original x.a and x.b: ";
	cout << x.a << ' ' << x.b << '\n';
	
	y = f(x);
	
	cout << "Modified x.a and x.b: ";
	cout << x.a << ' ' << x.b << '\n';
	cout << "Modified y.a and y.b: ";
	cout << x.a << ' ' << x.b << '\n';
	
	return 0;
}

// Функция, которая получает и возвращает ссылку на структуру
mystruct &f(mystruct &var)
{
	var.a = var.a * var.a;
	var.b = var.b / var.b;
	return var;
}
*/ 


// 141 - использование объединения для перестановки двух байтов
//       в рамках короткого целочисленного значения.
/*
#include <iostream>

using namespace std;

void disp_binary(unsigned u);

union swap_bytes
{
	short int num;
	char ch[2];
};

int main()
{
	swap_bytes sb;
	char temp;
	
	sb.num = 15; // двоичный код: 0000 0000 0000 1111
	
	cout << "Original bytes: ";
	disp_binary(sb.ch[1]);
	cout << ' ';
	disp_binary(sb.ch[0]);
	cout << "\n\n";
	
	// Обмен байтов.
	temp = sb.ch[0];
	sb.ch[0] = sb.ch[1];
	sb.ch[1] = temp;
	
	cout << "Exchanged bytes: ";
	disp_binary(sb.ch[1]);
	cout << ' ';
	disp_binary(sb.ch[0]);
	cout << "\n\n";
	
	return 0;
}

// Отображение битов, состовляющих байт.
void disp_binary(unsigned u)
{
	register int t;

	for (t = 128; t > 0; t = t / 2)
		if (u & t) cout << "1 ";
		else cout << "0 ";
}
*/


// 142 - отображение ASCII-кода символов
//       в двоичной системе счисления.

/*
#include <iostream>
#include <conio.h>

using namespace std;

// Битовые поля, которые будут расшифрованы.
struct byte
{
	unsigned a : 1;
	unsigned b : 1;
	unsigned c : 1;
	unsigned d : 1;
	unsigned e : 1;
	unsigned f : 1;
	unsigned g : 1;
	unsigned h : 1;
};

union bits
{
	char ch;
	struct byte bit;
} ascii;

void disp_bits(bits b);

int main()
{
	do
	{
		cin >> ascii.ch;
		cout << ": ";
		disp_bits(ascii);
		cout << (int) ascii.ch << "\n\n";
	} while (ascii.ch != 'q'); // Выход при вводе буквы 'q'.
	
	return 0;
}

// Отображение конфигурации битов для каждого символа.
void disp_bits(bits b)
{
	if(b.bit.h) cout << "1 ";
	else cout << "0 ";
	if(b.bit.g) cout << "1 ";
	else cout << "0 ";
	if(b.bit.f) cout << "1 ";
	else cout << "0 ";
	if(b.bit.e) cout << "1 ";
	else cout << "0 ";
	if(b.bit.d) cout << "1 ";
	else cout << "0 ";
	if(b.bit.c) cout << "1 ";
	else cout << "0 ";
	if(b.bit.b) cout << "1 ";
	else cout << "0 ";
	if(b.bit.a) cout << "1 ";
	else cout << "0 ";
	cout << '\n';
}
*/


// 143 - использование анонимного объединения

/*
#include <Iostream>

using namespace std;

int main()
{
	// Это анонимное объединение.
	union
	{
		short int count;
		char ch[2];
	};
		
		// Вот как происходит непосредственное обращение к 
		// членам анонимного объединения.
		ch[0] = 'X';
		ch[1] = 'Y';
		cout << "union as chars: " << ch[0] << ch[1] << '\n';
		cout << "union as integer: " << count << '\n';
		
		return 0;
}
*/

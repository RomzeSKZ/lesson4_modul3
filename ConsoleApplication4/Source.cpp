#include <stdio.h>
#include <locale.h>
#include <iostream>
using namespace std;

char s;
void main()
{
	setlocale(LC_ALL, "Rus");
	int i = 0;
Start:
	cout << "Номер задания: ";
	short unsigned int a = 0;
	cin >> a;
	if (a == 1)
	{
	Task1:
		i++;
		system("cls");
		cout << "Задание 1:" << endl;
		cout << "Локатор может быть ориентирован на одну из сторон света («C» – север, «Ю» – юг, «З» –  запад, «В» – восток) и может принимать команды: «1» – поворот направо (90), «–1» –  поворот налево (–90), «2» – поворот в обратную сторону (180). Исходная ориентация локатора «C». Определить ориентацию локатора после выполнения последовательности вводимых команд N1, N2 ." << endl;
		cout << "Решение:" << endl;
		int N1;
		int N2;
		cout << "Введите две команды поворота локатора: " << endl;
		cout << "«1» – поворот направо (90)" << endl;
		cout << "«-1» – поворот налево (-90)" << endl;
		cout << "«2» – поворот в обратную сторону (180)" << endl;
		cin >> N1;
		cin >> N2;
		if (N1 == 1 && N2 == -1)
		{
			N1 = 90;
			N2 = -90;
		}
		else if (N1 == 1 && N2 == 2)
		{
			N1 = 90;
			N2 = 180;
		}
		else if (N1 == -1 && N2 == 1)
		{
			N1 = -90;
			N2 = 90;
		}
		else if (N1 == -1 && N2 == 2)
		{
			N1 = -90;
			N2 = 180;
		}
		else if (N1 == 2 && N2 == -1)
		{
			N1 = 180;
			N2 = -90;
		}
		else if (N1 == 2 && N2 == 1)
		{
			N1 = 180;
			N2 = 90;
		}
		else if (N1 == 1 && N2 == 1)
		{
			N1 = 90;
			N2 = 90;
		}
		else if (N1 == -1 && N2 == -1)
		{
			N1 = -90;
			N2 = -90;
		}
		else if (N1 == 2 && N2 == 2)
		{
			N1 = 180;
			N2 = 180;
		}
		if ((N1 + N2) == 0 || (N1 + N2) == 360)
		{
			cout << "Локатор повернут на Север." << endl;
		}
		else if ((N1 + N2) == 90 || (N1 + N2) == -90)
		{
			cout << "Локатор повернут на Восток." << endl;
		}
		else if ((N1 + N2) == 180 || (N1 + N2) == -180)
		{
			cout << "Локатор повернут на Юг." << endl;
		}
		else if ((N1 + N2) == 270 || (N1 + N2) == -270)
		{
			cout << "Локатор повернут на Запад." << endl;
		}
	reTry1:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task1;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry1;
		}
	}
	else if (a == 2)
	{
	Task2:
		i++;
		system("cls");
		cout << "Задание 2:" << endl;
		cout << "Даны значения трех сторон треугольника a, b и c. Определить вид треугольника (прямоугольный, равносторонний или простой). Ответ вывести в виде сообщения." << endl;
		cout << "Решение:" << endl;
		int a;
		int b;
		int c;
		cout << "Введите значения сторон треугольника (a, b, c) : " << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a == b && b == c)
			cout << "Треугольник равносторонний." << endl;
		else if ((a * a == b * b + c * c) || (b * b == c * c + a * a) || (c * c == a * a + b * b))
			cout << "Треугольник прямоугольный." << endl;
		else if (a != b && a != c && b != c)
			cout << "Треугольник простой." << endl;
		else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
			cout << "Треугольник равнобедренный." << endl;
	reTry2:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task2;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry2;
		}
	}
	else if (a == 3)
	{
	Task3:
		i++;
		system("cls");
		cout << "Задание 3:" << endl;
		cout << "Даны два числа A и B. Разработать и описать алгоритм, в результате которого числа меняют свой знак на противоположный, если они имеют разный знак и будут заменены на нули, если это не так." << endl;
		cout << "Решение:" << endl;
		int A;
		int B;
		cout << "Введите 2 числа : " << endl;
		cout << "A: ";
		cin >> A;
		cout << "B: ";
		cin >> B;
		if ((A > 0 && B < 0) || (B > 0 && A < 0))
		{
			A = A*(-1);
			B = B*(-1);
			cout << A << "\t" << B << endl;
		}
		else
		{
			A = 0;
			B = 0;
			cout << A << "\t" << B << endl;
		}
	reTry3:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task3;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry3;
		}
	}
	else if (a == 4)
	{
	Task4:
		i++;
		system("cls");
		cout << "Задание 4:" << endl;
		cout << "Дано целое число k (1<k<365). Определить, каким днем недели (понедельник, вторник,... воскресенье) является k-день невисокосного года, если 1 января – понедельник." << endl;
		cout << "Решение:" << endl;
		int day;
		cout << "Введите день: " << endl;
		cin >> day;
		if (day >= 1 && day <= 365)
		{
			int week = day % 7;
			if (week == 0)
			{
				cout << day << " - это воскресенье." << endl;
			}
			else if (week == 6)
			{
				cout << day << " - это суббота." << endl;
			}
			else if (week == 5)
			{
				cout << day << " - это пятница." << endl;
			}
			else if (week == 4)
			{
				cout << day << " - это четверг." << endl;
			}
			else if (week == 3)
			{
				cout << day << " - это среда." << endl;
			}
			else if (week == 2)
			{
				cout << day << " - это вторник." << endl;
			}
			else if (week == 1)
			{
				cout << day << " - это понедельник." << endl;
			}
		}
		else
		{
			cout << "Введите корректный  день." << endl;
		}
	reTry4:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task4;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry4;
		}
	}
	else if (a == 5)
	{
	Task5:
		i++;
		system("cls");
		cout << "Задание 5:" << endl;
		cout << "Закажите гостиницу на курорте Трускавец, выбрав уровень гостиницы  количество мест в номере, проживание с питанием или без. Гостиница «Курортная» пять звезд, одноместная комната – 1000 тн в сутки (с питанием 1500 тн), двухместный – 1500 тн (с питанием 2500 тн). Гостиница «Верховина» четыре звезды, одноместная комната – 600 тн в сутки (с питанием 900 тн), двухместный - 900гр (с питанием 1500 тн). Гостиница «Гуцулка» три звезды, одноместная комната – 300 тн в сутки (с питанием 500тн), двухместный – 450 тн (с питанием 800 тн). Предусмотреть обработку ошибок ввода." << endl;
		cout << "Решение:" << endl;
		cout << "Выберите гостиницу:" << endl;
		cout << "1 - гостиница «Курортная» (*****)." << endl;
		cout << "2 - гостиница «Верховина» (****)." << endl;
		cout << "3 - гостиница «Гуцулка» (***)." << endl;
		int g;
		cin >> g;
		cout << "Комната:" << endl;
		cout << "1 - одноместная." << endl;
		cout << "2 - двуместная." << endl;
		int k;
		cin >> k;
		cout << "С обедом?" << endl;
		cout << "1 - да." << endl;
		cout << "2 - нет." << endl;
		int o;
		cin >> o;
		if ((g >= 1 && g <= 3) && (k >= 1 && k <= 2) && (o >= 1 && o <= 1))
		{
			if (g == 1 && k == 1 && o == 1)
				cout << "Стоимость составляет: 1500 тг/сутки." << endl;
			else if (g == 1 && k == 1 && o == 2)
				cout << "Стоимость составляет: 1000 тг/сутки." << endl;
			else if (g == 1 && k == 2 && o == 1)
				cout << "Стоимость составляет: 2500 тг/сутки." << endl;
			else if (g == 1 && k == 2 && o == 2)
				cout << "Стоимость составляет: 1500 тг/сутки." << endl;
			else if (g == 2 && k == 1 && o == 1)
				cout << "Стоимость составляет: 900 тг/сутки." << endl;
			else if (g == 2 && k == 1 && o == 2)
				cout << "Стоимость составляет: 600 тг/сутки." << endl;
			else if (g == 2 && k == 2 && o == 1)
				cout << "Стоимость составляет: 1500 тг/сутки." << endl;
			else if (g == 2 && k == 2 && o == 2)
				cout << "Стоимость составляет: 900 тг/сутки." << endl;
			else if (g == 3 && k == 1 && o == 1)
				cout << "Стоимость составляет: 500 тг/сутки." << endl;
			else if (g == 3 && k == 1 && o == 2)
				cout << "Стоимость составляет: 300 тг/сутки." << endl;
			else if (g == 3 && k == 2 && o == 1)
				cout << "Стоимость составляет: 800 тг/сутки." << endl;
			else if (g == 3 && k == 2 && o == 2)
				cout << "Стоимость составляет: 450 тг/сутки." << endl;
		}
		else
			cout << "Ошибка в вводе данных." << endl;
	reTry5:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task5;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry5;
		}
	}
	else if (a == 6)
	{
	Task6:
		i++;
		system("cls");
		cout << "Задание 6:" << endl;
		cout << "Напишите функцию intf(int x), которая принимает целое значение (не больше пяти знаков) и возвращает число с обратным порядком цифр. Например, принимается число 7631, возвращается число 1367." << endl;
		cout << "Решение:" << endl;
		int x;
		cout << "Введите целое число (не более 5 знаков) : " << endl;
		cin >> x;
		if (x >= 10000 && x <= 99999)
		{
			int x1 = x / 10000;
			int x2 = (x % 10000) / 1000;
			int x3 = (x % 1000) / 100;
			int x4 = (x % 100) / 10;
			int x5 = x % 10;
			cout << "Ваше число наоборот: " << x5 << x4 << x3 << x2 << x1 << endl;
		}
		else if (x >= 1000 && x <= 9999)
		{
			int x1 = x / 1000;
			int x2 = (x % 1000) / 100;
			int x3 = (x % 100) / 10;
			int x4 = x % 10;
			cout << "Ваше число наоборот: " << x4 << x3 << x2 << x1 << endl;
		}
		else if (x >= 100 && x <= 999)
		{
			int x1 = x / 100;
			int x2 = (x % 100) / 10;
			int x3 = x % 10;
			cout << "Ваше число наоборот: " << x3 << x2 << x1 << endl;
		}
		else if (x >= 10 && x <= 99)
		{
			int x1 = x / 10;
			int x2 = x % 10;
			cout << "Ваше число наоборот: " << x2 << x1 << endl;
		}
		else if (x >= 1 && x <= 9)
		{
			cout << "Ваше число наоборот: " << x << endl;
		}
		else
		{
			cout << "Введите корректное число." << endl;
		}
	reTry6:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task6;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry6;
		}
	}
	else if (a == 7)
	{
	Task7:
		i++;
		system("cls");
		cout << "Задание 7:" << endl;
		cout << "Дата подается в формате ДД.ММ.ГГГГ (то есть в случае, если или месяц день представляется однозначным числом, то к нему дописывается незначащий ноль), либо в формате Д.М.ГГГГ. Например, 31 января 2015 года будет записано как 31.01.2015 или как 31.1.2015. Вывести дату необходимо в таком же формате, как она была введена. Если введенная дата попадает под оба формата, то подразумевается формат ДД.ММ.ГГГГ. Если введена некорректная дата (например, 99.99.2015), необходимо вывести «WRONG DATE» (без кавычек). Если введенная строка не попадает ни под один из разрешенных форматов ввода, необходимо вывести «WRONG FORMAT» (без кавычек). Напоминаем, что год является високосным, если он делится на 4, но не делится на 100, либо если он делится на 400." << endl;
		cout << "Решение:" << endl;
		int day;
		int month;
		int year;
		cout << "Введите день: ";
		cin >> day;
		cout << "Введите месяц: ";
		cin >> month;
		cout << "Введите год: ";
		cin >> year;
		if (day >= 1 && day <= 31 && month >= 1 && month <= 12 && year >= 0)
		{
			if (month == 1 && day >= 1 && day <= 31)
			{
				if (day < 10 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << month << "." << year << endl;
			}
			else if (month == 2 && day >= 1 && day <= 29)
			{
				if (day < 10 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << month << "." << year << endl;
			}
			else if (month == 3 && day >= 1 && day <= 31)
			{
				if (day < 10 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << month << "." << year << endl;
			}
			else if (month == 4 && day >= 1 && day <= 30)
			{
				if (day < 10 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << month << "." << year << endl;
			}
			else if (month == 5 && day >= 1 && day <= 31)
			{
				if (day < 10 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << month << "." << year << endl;
			}
			else if (month == 6 && day >= 1 && day <= 30)
			{
				if (day < 10 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << month << "." << year << endl;
			}
			else if (month == 7 && day >= 1 && day <= 31)
			{
				if (day < 10 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << month << "." << year << endl;
			}
			else if (month == 8 && day >= 1 && day <= 31)
			{
				if (day < 10 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << month << "." << year << endl;
			}
			else if (month == 9 && day >= 1 && day <= 30)
			{
				if (day < 10 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << month << "." << year << endl;
			}
			else if (month == 10 && day >= 1 && day <= 31)
			{
				if (day < 10 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << month << "." << year << endl;
			}
			else if (month == 11 && day >= 1 && day <= 30)
			{
				if (day < 10 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << month << "." << year << endl;
			}
			else if (month == 12 && day >= 1 && day <= 31)
			{
				if (day < 10 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "Дата в формате ДД.ММ.ГГГГ: " << day << "." << month << "." << year << endl;
			}
			else
				cout << "WRONG FORMAT" << endl;
		}
		else
			cout << "WRONG DATE" << endl;
	reTry7:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task7;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry7;
		}
	}
	else
	{
		cout << "Введите номер задания от 1 до 7." << endl;
		goto Start;
	}
tryExit:
	cout << "Вы хотите продолжить? (y/n) ";
	cin >> s;
	if (s == 'y')
	{
		goto Start;
	}
	else if (s == 'n')
	{
		cout << "Вы выполнили задание " << i << " раз(-а)." << endl;
	}
	else
	{
		cout << "Введите y или n" << endl;
		goto tryExit;
	}
}

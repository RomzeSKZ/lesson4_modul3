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
	cout << "����� �������: ";
	short unsigned int a = 0;
	cin >> a;
	if (a == 1)
	{
	Task1:
		i++;
		system("cls");
		cout << "������� 1:" << endl;
		cout << "������� ����� ���� ������������ �� ���� �� ������ ����� (�C� � �����, �޻ � ��, �ǻ �  �����, �» � ������) � ����� ��������� �������: �1� � ������� ������� (90), ��1� �  ������� ������ (�90), �2� � ������� � �������� ������� (180). �������� ���������� �������� �C�. ���������� ���������� �������� ����� ���������� ������������������ �������� ������ N1, N2 ." << endl;
		cout << "�������:" << endl;
		int N1;
		int N2;
		cout << "������� ��� ������� �������� ��������: " << endl;
		cout << "�1� � ������� ������� (90)" << endl;
		cout << "�-1� � ������� ������ (-90)" << endl;
		cout << "�2� � ������� � �������� ������� (180)" << endl;
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
			cout << "������� �������� �� �����." << endl;
		}
		else if ((N1 + N2) == 90 || (N1 + N2) == -90)
		{
			cout << "������� �������� �� ������." << endl;
		}
		else if ((N1 + N2) == 180 || (N1 + N2) == -180)
		{
			cout << "������� �������� �� ��." << endl;
		}
		else if ((N1 + N2) == 270 || (N1 + N2) == -270)
		{
			cout << "������� �������� �� �����." << endl;
		}
	reTry1:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry1;
		}
	}
	else if (a == 2)
	{
	Task2:
		i++;
		system("cls");
		cout << "������� 2:" << endl;
		cout << "���� �������� ���� ������ ������������ a, b � c. ���������� ��� ������������ (�������������, �������������� ��� �������). ����� ������� � ���� ���������." << endl;
		cout << "�������:" << endl;
		int a;
		int b;
		int c;
		cout << "������� �������� ������ ������������ (a, b, c) : " << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a == b && b == c)
			cout << "����������� ��������������." << endl;
		else if ((a * a == b * b + c * c) || (b * b == c * c + a * a) || (c * c == a * a + b * b))
			cout << "����������� �������������." << endl;
		else if (a != b && a != c && b != c)
			cout << "����������� �������." << endl;
		else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
			cout << "����������� ��������������." << endl;
	reTry2:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry2;
		}
	}
	else if (a == 3)
	{
	Task3:
		i++;
		system("cls");
		cout << "������� 3:" << endl;
		cout << "���� ��� ����� A � B. ����������� � ������� ��������, � ���������� �������� ����� ������ ���� ���� �� ���������������, ���� ��� ����� ������ ���� � ����� �������� �� ����, ���� ��� �� ���." << endl;
		cout << "�������:" << endl;
		int A;
		int B;
		cout << "������� 2 ����� : " << endl;
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
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry3;
		}
	}
	else if (a == 4)
	{
	Task4:
		i++;
		system("cls");
		cout << "������� 4:" << endl;
		cout << "���� ����� ����� k (1<k<365). ����������, ����� ���� ������ (�����������, �������,... �����������) �������� k-���� ������������� ����, ���� 1 ������ � �����������." << endl;
		cout << "�������:" << endl;
		int day;
		cout << "������� ����: " << endl;
		cin >> day;
		if (day >= 1 && day <= 365)
		{
			int week = day % 7;
			if (week == 0)
			{
				cout << day << " - ��� �����������." << endl;
			}
			else if (week == 6)
			{
				cout << day << " - ��� �������." << endl;
			}
			else if (week == 5)
			{
				cout << day << " - ��� �������." << endl;
			}
			else if (week == 4)
			{
				cout << day << " - ��� �������." << endl;
			}
			else if (week == 3)
			{
				cout << day << " - ��� �����." << endl;
			}
			else if (week == 2)
			{
				cout << day << " - ��� �������." << endl;
			}
			else if (week == 1)
			{
				cout << day << " - ��� �����������." << endl;
			}
		}
		else
		{
			cout << "������� ����������  ����." << endl;
		}
	reTry4:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry4;
		}
	}
	else if (a == 5)
	{
	Task5:
		i++;
		system("cls");
		cout << "������� 5:" << endl;
		cout << "�������� ��������� �� ������� ���������, ������ ������� ���������  ���������� ���� � ������, ���������� � �������� ��� ���. ��������� ����������� ���� �����, ����������� ������� � 1000 �� � ����� (� �������� 1500 ��), ����������� � 1500 �� (� �������� 2500 ��). ��������� ���������� ������ ������, ����������� ������� � 600 �� � ����� (� �������� 900 ��), ����������� - 900�� (� �������� 1500 ��). ��������� �������� ��� ������, ����������� ������� � 300 �� � ����� (� �������� 500��), ����������� � 450 �� (� �������� 800 ��). ������������� ��������� ������ �����." << endl;
		cout << "�������:" << endl;
		cout << "�������� ���������:" << endl;
		cout << "1 - ��������� ����������� (*****)." << endl;
		cout << "2 - ��������� ���������� (****)." << endl;
		cout << "3 - ��������� �������� (***)." << endl;
		int g;
		cin >> g;
		cout << "�������:" << endl;
		cout << "1 - �����������." << endl;
		cout << "2 - ����������." << endl;
		int k;
		cin >> k;
		cout << "� ������?" << endl;
		cout << "1 - ��." << endl;
		cout << "2 - ���." << endl;
		int o;
		cin >> o;
		if ((g >= 1 && g <= 3) && (k >= 1 && k <= 2) && (o >= 1 && o <= 1))
		{
			if (g == 1 && k == 1 && o == 1)
				cout << "��������� ����������: 1500 ��/�����." << endl;
			else if (g == 1 && k == 1 && o == 2)
				cout << "��������� ����������: 1000 ��/�����." << endl;
			else if (g == 1 && k == 2 && o == 1)
				cout << "��������� ����������: 2500 ��/�����." << endl;
			else if (g == 1 && k == 2 && o == 2)
				cout << "��������� ����������: 1500 ��/�����." << endl;
			else if (g == 2 && k == 1 && o == 1)
				cout << "��������� ����������: 900 ��/�����." << endl;
			else if (g == 2 && k == 1 && o == 2)
				cout << "��������� ����������: 600 ��/�����." << endl;
			else if (g == 2 && k == 2 && o == 1)
				cout << "��������� ����������: 1500 ��/�����." << endl;
			else if (g == 2 && k == 2 && o == 2)
				cout << "��������� ����������: 900 ��/�����." << endl;
			else if (g == 3 && k == 1 && o == 1)
				cout << "��������� ����������: 500 ��/�����." << endl;
			else if (g == 3 && k == 1 && o == 2)
				cout << "��������� ����������: 300 ��/�����." << endl;
			else if (g == 3 && k == 2 && o == 1)
				cout << "��������� ����������: 800 ��/�����." << endl;
			else if (g == 3 && k == 2 && o == 2)
				cout << "��������� ����������: 450 ��/�����." << endl;
		}
		else
			cout << "������ � ����� ������." << endl;
	reTry5:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry5;
		}
	}
	else if (a == 6)
	{
	Task6:
		i++;
		system("cls");
		cout << "������� 6:" << endl;
		cout << "�������� ������� intf(int x), ������� ��������� ����� �������� (�� ������ ���� ������) � ���������� ����� � �������� �������� ����. ��������, ����������� ����� 7631, ������������ ����� 1367." << endl;
		cout << "�������:" << endl;
		int x;
		cout << "������� ����� ����� (�� ����� 5 ������) : " << endl;
		cin >> x;
		if (x >= 10000 && x <= 99999)
		{
			int x1 = x / 10000;
			int x2 = (x % 10000) / 1000;
			int x3 = (x % 1000) / 100;
			int x4 = (x % 100) / 10;
			int x5 = x % 10;
			cout << "���� ����� ��������: " << x5 << x4 << x3 << x2 << x1 << endl;
		}
		else if (x >= 1000 && x <= 9999)
		{
			int x1 = x / 1000;
			int x2 = (x % 1000) / 100;
			int x3 = (x % 100) / 10;
			int x4 = x % 10;
			cout << "���� ����� ��������: " << x4 << x3 << x2 << x1 << endl;
		}
		else if (x >= 100 && x <= 999)
		{
			int x1 = x / 100;
			int x2 = (x % 100) / 10;
			int x3 = x % 10;
			cout << "���� ����� ��������: " << x3 << x2 << x1 << endl;
		}
		else if (x >= 10 && x <= 99)
		{
			int x1 = x / 10;
			int x2 = x % 10;
			cout << "���� ����� ��������: " << x2 << x1 << endl;
		}
		else if (x >= 1 && x <= 9)
		{
			cout << "���� ����� ��������: " << x << endl;
		}
		else
		{
			cout << "������� ���������� �����." << endl;
		}
	reTry6:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry6;
		}
	}
	else if (a == 7)
	{
	Task7:
		i++;
		system("cls");
		cout << "������� 7:" << endl;
		cout << "���� �������� � ������� ��.��.���� (�� ���� � ������, ���� ��� ����� ���� �������������� ����������� ������, �� � ���� ������������ ���������� ����), ���� � ������� �.�.����. ��������, 31 ������ 2015 ���� ����� �������� ��� 31.01.2015 ��� ��� 31.1.2015. ������� ���� ���������� � ����� �� �������, ��� ��� ���� �������. ���� ��������� ���� �������� ��� ��� �������, �� ��������������� ������ ��.��.����. ���� ������� ������������ ���� (��������, 99.99.2015), ���������� ������� �WRONG DATE� (��� �������). ���� ��������� ������ �� �������� �� ��� ���� �� ����������� �������� �����, ���������� ������� �WRONG FORMAT� (��� �������). ����������, ��� ��� �������� ����������, ���� �� ������� �� 4, �� �� ������� �� 100, ���� ���� �� ������� �� 400." << endl;
		cout << "�������:" << endl;
		int day;
		int month;
		int year;
		cout << "������� ����: ";
		cin >> day;
		cout << "������� �����: ";
		cin >> month;
		cout << "������� ���: ";
		cin >> year;
		if (day >= 1 && day <= 31 && month >= 1 && month <= 12 && year >= 0)
		{
			if (month == 1 && day >= 1 && day <= 31)
			{
				if (day < 10 && month < 10)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "���� � ������� ��.��.����: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "���� � ������� ��.��.����: " << day << "." << month << "." << year << endl;
			}
			else if (month == 2 && day >= 1 && day <= 29)
			{
				if (day < 10 && month < 10)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "���� � ������� ��.��.����: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "���� � ������� ��.��.����: " << day << "." << month << "." << year << endl;
			}
			else if (month == 3 && day >= 1 && day <= 31)
			{
				if (day < 10 && month < 10)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "���� � ������� ��.��.����: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "���� � ������� ��.��.����: " << day << "." << month << "." << year << endl;
			}
			else if (month == 4 && day >= 1 && day <= 30)
			{
				if (day < 10 && month < 10)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "���� � ������� ��.��.����: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "���� � ������� ��.��.����: " << day << "." << month << "." << year << endl;
			}
			else if (month == 5 && day >= 1 && day <= 31)
			{
				if (day < 10 && month < 10)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "���� � ������� ��.��.����: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "���� � ������� ��.��.����: " << day << "." << month << "." << year << endl;
			}
			else if (month == 6 && day >= 1 && day <= 30)
			{
				if (day < 10 && month < 10)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "���� � ������� ��.��.����: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "���� � ������� ��.��.����: " << day << "." << month << "." << year << endl;
			}
			else if (month == 7 && day >= 1 && day <= 31)
			{
				if (day < 10 && month < 10)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "���� � ������� ��.��.����: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "���� � ������� ��.��.����: " << day << "." << month << "." << year << endl;
			}
			else if (month == 8 && day >= 1 && day <= 31)
			{
				if (day < 10 && month < 10)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "���� � ������� ��.��.����: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "���� � ������� ��.��.����: " << day << "." << month << "." << year << endl;
			}
			else if (month == 9 && day >= 1 && day <= 30)
			{
				if (day < 10 && month < 10)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "���� � ������� ��.��.����: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "���� � ������� ��.��.����: " << day << "." << month << "." << year << endl;
			}
			else if (month == 10 && day >= 1 && day <= 31)
			{
				if (day < 10 && month < 10)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "���� � ������� ��.��.����: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "���� � ������� ��.��.����: " << day << "." << month << "." << year << endl;
			}
			else if (month == 11 && day >= 1 && day <= 30)
			{
				if (day < 10 && month < 10)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "���� � ������� ��.��.����: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "���� � ������� ��.��.����: " << day << "." << month << "." << year << endl;
			}
			else if (month == 12 && day >= 1 && day <= 31)
			{
				if (day < 10 && month < 10)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << 0 << month << "." << year << endl;
				else if (day < 10 && month > 9)
					cout << "���� � ������� ��.��.����: " << 0 << day << "." << month << "." << year << endl;
				else if (day > 9 && month < 10)
					cout << "���� � ������� ��.��.����: " << day << "." << 0 << month << "." << year << endl;
				else if (day > 9 && month > 9)
					cout << "���� � ������� ��.��.����: " << day << "." << month << "." << year << endl;
			}
			else
				cout << "WRONG FORMAT" << endl;
		}
		else
			cout << "WRONG DATE" << endl;
	reTry7:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry7;
		}
	}
	else
	{
		cout << "������� ����� ������� �� 1 �� 7." << endl;
		goto Start;
	}
tryExit:
	cout << "�� ������ ����������? (y/n) ";
	cin >> s;
	if (s == 'y')
	{
		goto Start;
	}
	else if (s == 'n')
	{
		cout << "�� ��������� ������� " << i << " ���(-�)." << endl;
	}
	else
	{
		cout << "������� y ��� n" << endl;
		goto tryExit;
	}
}

#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");

	int a = 0, b = 0;
	cout << "������������ ������  �4.\n������� �1." << endl;
	cout << "������� ����� ������� a: "; cin >> a;
	cout << "������� ����� ������� b: "; cin >> b;
	cout << "������� ����� �������������: " << a * b << endl;
	cout << "�������� ����� �������������: " << 2 * (a + b) << endl;

	int d = 0;
	cout << "\n������� �2." << endl;
	cout << "������� ������� ����������: "; cin >> d;
	cout << "����� ���� ����������: " << d * 3.14 << endl;

	cout << "\n������� �3." << endl;
	cout << "������� �������� ����� a: "; cin >> a;
	cout << "������� �������� ����� b: "; cin >> b;
	cout << "�� ������� ��������������: " << (a + b) / 2 << endl;

	cout << "\n������� �4." << endl;
	cout << "������� �������� ����� a (�������� �����): "; cin >> a;
	cout << "������� �������� ����� b (�������� �����): "; cin >> b;
	cout << "����� �� ���������: " << pow(a, 2) + pow(b, 2) << endl;
	cout << "�������� �� ���������: " << pow(b, 2) - pow(a, 2) << endl;
	cout << "������������ �� ���������: " << pow(a, 2) * pow(b, 2) << endl;
	cout << "������� �� ���������: " << pow(a, 2) / pow(b, 2) << endl;

	cout << "\n������� �5." << endl;
	cout << "������� �������� ����� a (�������� �����): "; cin >> a;
	cout << "������� �������� ����� b (�������� �����): "; cin >> b;
	cout << "����� �� �������: " << fabs(a) + fabs(b) << endl;
	cout << "�������� �� �������: " << fabs(b) - fabs(a) << endl;
	cout << "������������ �� �������: " << fabs(a) * fabs(b) << endl;
	cout << "������� �� �������: " << fabs(a) / fabs(b) << endl;

	return 0;
}


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a = 0, b = 0;
	cout << "Лабораторная работа  №4.\nЗадание №1." << endl;
	cout << "Введите длину стороны a: "; cin >> a;
	cout << "Введите длину стороны b: "; cin >> b;
	cout << "Площадь этого прямогульника: " << a * b << endl;
	cout << "Периметр этого прямогульника: " << 2 * (a + b) << endl;

	int d = 0;
	cout << "\nЗадание №2." << endl;
	cout << "Введите диаметр окружности: "; cin >> d;
	cout << "Длина этой коружности: " << d * 3.14 << endl;

	cout << "\nЗадание №3." << endl;
	cout << "Введите значение числа a: "; cin >> a;
	cout << "Введите значение числа b: "; cin >> b;
	cout << "Их среднее арифметическое: " << (a + b) / 2 << endl;

	cout << "\nЗадание №4." << endl;
	cout << "Введите значение числа a (меньшего числа): "; cin >> a;
	cout << "Введите значение числа b (большего числа): "; cin >> b;
	cout << "Сумма их квадратов: " << pow(a, 2) + pow(b, 2) << endl;
	cout << "Разность их квадратов: " << pow(b, 2) - pow(a, 2) << endl;
	cout << "Произведение их квадратов: " << pow(a, 2) * pow(b, 2) << endl;
	cout << "Частное их квадратов: " << pow(a, 2) / pow(b, 2) << endl;

	cout << "\nЗадание №5." << endl;
	cout << "Введите значение числа a (меньшего числа): "; cin >> a;
	cout << "Введите значение числа b (большего числа): "; cin >> b;
	cout << "Сумма их модулей: " << fabs(a) + fabs(b) << endl;
	cout << "Разность их модулей: " << fabs(b) - fabs(a) << endl;
	cout << "Произведение их модулей: " << fabs(a) * fabs(b) << endl;
	cout << "Частное их модулей: " << fabs(a) / fabs(b) << endl;

	return 0;
}


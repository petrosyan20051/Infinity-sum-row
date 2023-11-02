#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	long double e, x; // e - эпсилон
	int i = 3, fac = 1; // i - степень и факториал, fac - факториал числа

	cout << "Расчитываем приближённое значение ln(1 - x) с точностью E" << endl;
	cout << "Введите точность вычислений E: ";
	cin >> e;
	cout << "Введите x: ";
	cin >> x;
	while (x >= 1)
	{
		cout << "Попробуйте ещё раз!" << endl;
		cout << "Введите x: ";
		cin >> x;
	}
	

	long double elem = -x, s = -x;

	while (fabs(elem) >= e)
	{
		fac = fac * (i - 1);
		elem = pow(x, i - 1) / fac;
		cout << "elem" << i - 1 << " = " << elem << endl;
		s -= elem;
		cout << "s = " << s << endl;
		i++;
	}
	cout << s;
	return 0;
}
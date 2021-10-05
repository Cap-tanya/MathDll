#include "pch.h"
#include "Mathlib.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

void CHfromN(int a, int b, int n)
{
	double c = (double)a / b;
	cout << "Обычный вывод: " << c << endl;
	int k = cout.precision();//определяем точность в обычном состоянии
	cout.setf(ios::fixed, ios::floatfield);// устанавливаем флаг 
	cout << setprecision(n) <<"Вывод с точностью "<< n <<": " << c << endl;// меняем точность
	cout<< setprecision(k);//возвращаем исходную
	cout.unsetf(ios::fixed);//отчищаем флаг
}

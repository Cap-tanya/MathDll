#include "pch.h"
#include "Mathlib.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

void CHfromN(int a, int b, int n)
{
	double c = (double)a / b;
	cout << "������� �����: " << c << endl;
	int k = cout.precision();//���������� �������� � ������� ���������
	cout.setf(ios::fixed, ios::floatfield);// ������������� ���� 
	cout << setprecision(n) <<"����� � ��������� "<< n <<": " << c << endl;// ������ ��������
	cout<< setprecision(k);//���������� ��������
	cout.unsetf(ios::fixed);//�������� ����
}
